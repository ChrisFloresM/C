#include <stdio.h>

int fact(int);

void main()
{
    int N, FACT;
    printf("\nIngrese el numero para calcular el factoria: ");
    scanf("%d",&N);
    FACT = fact(N);
    printf("\nEl factorial de %d es %d",N, FACT);
}

int fact(int num)
{
    int fac = 1, I;
    for (I = 1; I<=num; I++)
    {
        fac *= I;
    }
    return fac;
}