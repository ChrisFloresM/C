#include <stdio.h>

float serie(int);

void main()
{
    int NUM;
    float SER;
    printf("\nIngrese un numero para calcular la serie: ");
    scanf("%d", &NUM);
    SER = serie(NUM);
    printf("\nEl valor de la serie es de: %4.2f", SER);
}

float serie(int n)
{
    static int sel = 1, I;
    static float res = 1;
    for (I = 2; I <= n; I++)
    {
        if (sel == 1)
        {
            res *= 1 /(float)I;
            sel = 0;
        }
        else
        {
            res /= 1 /(float)I;
            sel = 1;
        }
    }
    return res;
}