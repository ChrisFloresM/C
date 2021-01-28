#include <stdio.h>

void main(){
    float CAN, PES;
    printf("\nDolares: ");
    scanf("%f",&CAN);
    PES = CAN*22.19;
    printf("\nPesos: %4.2f",PES);
}