#include <stdio.h>
#include <math.h>

void main()
{
    int S = 1, X, I, N, FACT, T = 0;
    float SEN = 0.0, SENP = 0.0, EVAL, SER, SENR;
    printf("\nIngrese un valor de X para calucularle el seno: ");
    scanf("%d", &X);
    I = 1;
    do
    {
        FACT = 1;
        for (N = 1; N <= I; N++)
        {
            FACT = FACT * N;
        }
        SER = pow(X, I) / FACT;
        if (S == 1)
        {
            SEN = SEN + SER;
            S = 0;
        }
        else
        {
            SEN = SEN - SER;
            S = 1;
        }
        EVAL = fabs(SEN - SENP);
        SENP = SEN;
        I += 2;
        T++;
        printf("\nEl resultado es: %1.5f", SEN);
    } while (EVAL > 0.001);
    printf("\nEl resultado es: %4.2f", SEN);
    printf("\nSe requeririeron %d terminos", T);
}