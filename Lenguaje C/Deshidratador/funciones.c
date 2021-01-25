#include "funciones.h"

//Funcion que inicializa configuraciones iniciales para el programa
void inicializa(void){
   lcd_init();
   port_b_pullups(TRUE);
   output_c(0);
   output_high(pin_c1);
   //interrupciones---------------------------------
   enable_interrupts(GLOBAL);
   enable_interrupts(INT_EXT);
   //configuracion de timer2 para ccp
   setup_timer_2(T2_DIV_BY_16,120,1); //prescaler de 16 o 65
   setup_ccp1(ccp_pwm);
   setup_adc_ports(all_analog);
   setup_adc(adc_clock_internal);
   //configuración de timer1
   setup_timer_1(T1_INTERNAL|T1_DIV_BY_8);   
}

//Funcion para que el usuario seleccione un producto a deshidratar
int8 product_select(void)
{
   unsigned int8 producto = 0;
   printf(lcd_putc, "\fSeleccione\n producto:");
   if(input(pin_b1)==0){ //platano
      producto = 1;
   }
   else if(input(pin_b2)==0){ //Manzana
      producto = 2;
   }
   else if(input(pin_b3)==0){ //fresa
      producto = 3;
   }
   
   return producto;
}

//Funcion para seleccionar una referencia de temperatura a alcanzar una vez seleccionado un producto
float temp_select(unsigned int8 *tiempo)
{
   float temperatura_ideal;
   switch(prod){
            case 1: //Platano
                    temperatura_ideal = 60.0;
                    *tiempo = 8;
                    break;
            case 2: //Manzana
                    temperatura_ideal = 55.0;
                    *tiempo = 6;
                    break;
            case 3: //fresa
                    temperatura_ideal = 50.0;
                    *tiempo = 7;
                    break;
            default: break;
         }
   proceso = 1;
   return temperatura_ideal;
}

//Interrupcion externa
#INT_EXT 
void interrupt(void)
{
   disable_interrupts(INT_Timer1);
   proceso = 0;
   prod = 0;
   horas = 0;
   milisegundos = 0;
   minutos = 0;
   set_pwm1_duty(255);
}

//interrupcion timer1 para contar el tiempo
#INT_Timer1
void contador_tiempo(void)
{
   //calcula el tiempo transcurrido
   milisegundos++; //incremento de 100 milisegundos
   control_tiempo++;
   if(control_tiempo==10){
      //Calculo de ley de control
      e = R-yM;
      // Control PID
      if(e < 0){
         u = u_1  + q0*e + q1*e_1 + q2*e_2; //Ley del controlador PID discreto
         if (u >= 255.0)        //Saturacion
         u = 255.0;
         if (u <= 0.0)
         u = 0.0;
         control = u;
         //el valor máximo del pwm es de 255
         //Retorno a los valores reales
         e_2=e_1;
         e_1=e;
         u_1=u;
      }
      else
      {
         control = 255;
      }
      set_pwm1_duty(control);
      control_tiempo = 0;
   }

   
   if(milisegundos == 540)
   {
      milisegundos = 0;
      minutos++;
      if(minutos == 60)
      {
         minutos = 0;
         horas++;
      }      
   }
   
   set_timer1(3036);
}

//imprimir tiempo en el lcd
void mostrar_parametros(unsigned int8 horas_restantes, float tref, float actual)
{
   static unsigned int8 minutos_restantes = 59;
   printf(lcd_putc,"\f");
   //Mostrar la fruta a deshidratar
   lcd_gotoxy(1,1);
   switch(prod){
            case 1: printf(lcd_putc,"PLATANO");
                    break;
            case 2: printf(lcd_putc,"MANZANA");
                    break;
            case 3: printf(lcd_putc,"FRESA");
                    break;
            default: break;
         }
   //Mostrar el tiempo restante en contador descendente
   lcd_gotoxy(9,1);
   printf(lcd_putc,"TR:%d:%2d",horas_restantes-horas-1,minutos_restantes-minutos);
   lcd_gotoxy(1,2);
   Printf(lcd_putc,"TRE:%2.0fC TA:%2.1fC",tref, yM);
}

void finaliza(void){
   disable_interrupts(INT_Timer1);
   printf(lcd_putc,"\fPROCESO \nFINALIZADO");
   delay_ms(500);
   printf(lcd_putc,"\f");
   delay_ms(500);
   printf(lcd_putc,"\fPROCESO \nFINALIZADO");
   delay_ms(500);
   proceso = 0;
   prod = 0;
   horas = 0;
   milisegundos = 0;
   minutos = 0;
   set_pwm1_duty(255);
}

float termocupula(void)
{
   static float valor;
   static float filt = valor;
   float alpha = 0.5;
   valor=do_everything();
   filt = (alpha*valor)+((1-alpha)*filt);
   return(filt);
}

void control(float referencia, float actual)
{
   yM = actual;
   R = referencia;
   kp=(1.2*tao)/(k*theta);
   ti=2*theta;
   td=0.5*theta;
   q0=kp*(1+T/(2*ti)+td/T);
   q1=-kp*(1-T/(2*ti)+(2*td)/T);
   q2=(kp*td)/T;
}
//!

