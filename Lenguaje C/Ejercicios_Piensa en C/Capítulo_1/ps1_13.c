#include <stdio.h>
#include <math.h>

void main(){
    float LADO, AB, AL, AT, VOL;
    printf("\nIngrese el lado del hexaedro: ");
    scanf("%f",&LADO);
    AB = pow(LADO,2);
    AL = 4.0*pow(LADO,2);
    AT = 6.0*pow(LADO,2);
    VOL = pow(LADO,3);
    printf("\nEl area de la base es de: %4.2f\nEl area lateral es de: %4.2f\nEl area total es de: %4.2f\n El volumen es de: %4.2f\n",AB,AL,AT,VOL);
}