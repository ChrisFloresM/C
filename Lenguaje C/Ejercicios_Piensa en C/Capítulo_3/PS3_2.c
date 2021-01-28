#include <stdio.h>

void main()
{
    int N, I;
    float R = 1.0;
    printf("\nIngrese un numero N: ");
    scanf("%d", &N);
    for (I = 2; I <= N; I++)
    {
        R = R + (1.0 / I);
        printf("\nNumero: %4.2f/%d",R,I);
    }
    printf("\nEl resultado de la serie es: %4.2f", R);
}