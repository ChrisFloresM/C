#include <stdio.h>
#include <math.h>

void main(){
    float RAD, AREA, VOL;
    printf("\nIngrese el radio de la esfera: ");
    scanf("%f",&RAD);
    VOL = (1.0/3.0)*M_PI*pow(RAD,3);
    AREA = 4*M_PI*pow(RAD,2);
    printf("\nEL area es: %4.2f\nEl volumen es: %4.2f\n",AREA,VOL);
}