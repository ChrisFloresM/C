#include <stdio.h>

void main()
{
    int PRO = 1, N, I;
    printf("\nIngrese el numero hasta el cual calcular la productoria: ");
    scanf("%d",&N);
    for( I = 1; I <= N; I++)
    {
        PRO *= I;
    }
    printf("\nLa producteria de %d es %d",N,PRO);
}