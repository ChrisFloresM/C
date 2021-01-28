#include <stdio.h>

void main(){
    float DIAS,SEG;
    printf("\nCuantos dias desea calcular?: ");
    scanf("%f",&DIAS);
    SEG = 3600*24*DIAS;
    printf("\nEn %.0f dias hay %.2f segundos",DIAS,SEG);
}
