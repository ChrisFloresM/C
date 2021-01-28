#include <stdio.h>
/* Programa que regresa la tabla de multiplicar dado un numero N */

void main()
{
    int N, I, P;
    printf("\nIngrese un numero: ");
    scanf("%d", &N);
    for (I = 1; I <= 10; I++)
    {
        P = N * I;
        printf("\n%d * %d = %d",N,I,P);
    }
}