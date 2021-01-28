#include <stdio.h>

void main(){
    int S;
    float FA;
    printf("\nCuantos sonidos por minuto emite su termo-grillo?: ");
    scanf("%d",&S);
    FA = S/4+40;
    printf("\nLa temperatura es de: %4.2f grados farenheit",FA);
}