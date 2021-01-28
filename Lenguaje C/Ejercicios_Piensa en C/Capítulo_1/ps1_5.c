#include <stdio.h>
#include <math.h>

void main(){
    float RAD, AREA, PER;
    printf("\nIngrese el radio del circulo en cm: ");
    scanf("%f",&RAD);
    AREA = M_PI*pow(RAD,2);
    PER = 2*M_PI*RAD;
    printf("\nEl area es de: %.2f cm2",AREA);
    printf("\nEl perimetro es de: %.2f cm",PER);
}