#include "inicializacion.h"
#include "funciones.c"
#use standard_io(b)

int main()
{
   inicializa();
   float temp_ref = 0;
   float temp_lectura = 0;
   unsigned int8 tiempo=0;
   set_pwm1_duty(255);
   while(true){
      //*****************************************
      if(!prod){
         prod = product_select();
      }
      else{
         if(!proceso)
            temp_ref = temp_select(&tiempo);
         else
         {
            enable_interrupts(INT_Timer1);
            set_timer1(3036);
            if(tiempo == horas){
               finaliza();
            }
            else{
              temp_lectura = termocupula(); //Leemos la temperatura /delay = 200ms
              mostrar_parametros(tiempo,temp_ref,temp_lectura); //Mandamos la lectura para mostrar en el lcd
              control(temp_ref, temp_lectura);
            }
         }    
      }
      delay_ms(500);
   }
   
   return 0;
}



