#include <stdio.h>

void main(){
    float COM;
    printf("\nIngrese el monto de la compra ($): ");
    scanf("%f",&COM);
    if(COM < 800)
        COM = COM;
    else 
        if(COM <= 1500)
            COM = 0.9*COM;
        else 
            if(COM <= 5000)
                COM = 0.85*COM;
            else 
                COM = 0.8*COM;
    printf("\nEl monto a pagar es de $%4.2f",COM);
}