#include <16F877A.h>
#fuses HS, NOWDT
#use delay(clock = 20M)
#include <lcd_d.c>
#include "max6675.c"
#use standard_io(b)
#use standard_io(c)

//configuracion para 
unsigned int8 prod = 0;
unsigned int8 proceso = 0;
unsigned int16 milisegundos = 0;  //maximo 10
unsigned int16 control_tiempo = 0;
unsigned int8 minutos = 0; //m-naximo 60
unsigned int8 horas = 0;  //maximo 8
unsigned int16 control = 0;
float e=0.0,e_1=0.0,e_2=0.0,u=0.0,u_1=0.0;
float yM=0.0,R=0.0;
float kp,ti,td,q0,q1,q2,T=1;
float k=0.17588,tao=366.515,theta=6.0;

