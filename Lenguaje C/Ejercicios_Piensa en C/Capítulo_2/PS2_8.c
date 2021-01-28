#include <stdio.h>

void main(){
    int MED, VAL;
    float TOT;
    printf("\nSeleccione la conversion a realizar: \n1 -> in - mm\n2 -> yar - m\n3 -> milla - km\n: ");
    scanf("%d",&MED);
    printf("\nIngrese la cantidad a convertir (entero): ");
    scanf("%d",&VAL);
    switch(MED){
        case 1: TOT = VAL*25.4;break;
        case 2: TOT = VAL*0.9144;break;
        case 3: TOT = VAL*1.6093;break;
        default: TOT = -1;break;
    }
    if(TOT > -1)
        printf("\nEl valor de la conversion es de: %4.2f",TOT);
    else 
        printf("\nConversion invalida");
}