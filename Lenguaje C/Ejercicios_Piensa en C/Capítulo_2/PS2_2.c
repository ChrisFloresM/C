#include <stdio.h>

void main(){
    float SAL;
    printf("\nIngrese el salario del trabajador: ");
    scanf("%f",&SAL);
    if(SAL < 18000)
        SAL = SAL*1.12;
    else 
        if(SAL <= 30000)
            SAL = SAL*1.08;
        else 
            if(SAL <= 50000)
                SAL = SAL*1.07;
            else
                SAL = SAL*1.06;
    printf("\nEl salario final del trabajador es de: %4.2f pesos",SAL);
}