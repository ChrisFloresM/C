#include <stdio.h>

void main(){
    int N1,N2;
    printf("\nIngrese N1 y N2: ");
    scanf("%d %d",&N1,&N2);
    if((N2%N1) == 0)
        printf("\n%d SI es divisor de %d",N1,N2);
    else
        printf("\n%d NO es divisor de %d",N1,N2);
}