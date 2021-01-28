#include <stdio.h>
#include <math.h>

float serie(int);

void main()
{
    int N;
    float res;
    printf("\nIngrese el numero X para calcular la serie cos(x): ");
    scanf("%d", &N);
    res = serie(N);
    printf("\nEl resultado de la serie es: %4.2f", res);
}

float serie(int x)
{
    float res = 1, sel = 1, resa = 0, n = 2, calc;
    int fact=1,I;
    do
    {
        for (I = 1; I <= n; I++)
        {
            fact *= I;
            //printf("\nEl factorial de %d es: %d",I, res);
        }
        if (sel == 1)
        {
            res -= (float)pow(x, n) / fact;
            sel = 0;
        }
        else
        {
            res += (float)pow(x, n) / fact;
        }
        calc = res - resa;
        resa = res;
        n += 2;
        printf("\nEl resultado de la serie es: %4.5f", res);
    } while (fabs(calc) > 0.001);
    return res;
}
