#include <stdio.h>

void primo(int);

void main()
{
    int NUM;
    printf("\nIngrese un numero: ");
    scanf("%d", &NUM);
    primo(NUM);
}

void primo(int n)
{
    int I, p = 1;
    for (I = 2; I <= n / 2; I++)
    {
        if (n % I == 0)
        {
            p = 0;
            break;
        }
    }
    if (p == 0)
    {
        printf("\nEl numero no es primo");
    }
    else
    {
        printf("\nEl numero si es primo");
    }
}