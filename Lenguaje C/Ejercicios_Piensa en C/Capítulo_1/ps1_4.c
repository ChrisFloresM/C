#include <stdio.h>

void main(){
    float PRE, PAG, CAM;
    printf("\nIngrese el precio del producto: ");
    scanf("%f",&PRE);
    printf("\nCon cuanto paga?: ");
    scanf("%f",&PAG);
    CAM = PAG-PRE;
    printf("\nSu cambio es de $%4.2f\n",CAM);
}