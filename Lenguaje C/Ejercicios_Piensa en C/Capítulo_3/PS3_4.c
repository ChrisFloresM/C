#include <stdio.h>

void main()
{
    int NEG = 0, POS = 0;
    int NUL = 0, N;
    int NUM;
    printf("\nIngrese la cantidad de numeros a verificar: ");
    scanf("%d", &N);
    for (int I = 1; I <= N; I++)
    {
        printf("\nIngrese el numero numero %d: ", I);
        scanf("%d", &NUM);
        if (NUM > 0)
        {
            POS++;
        }
        else
        {
            if (NUM < 0)
                NEG++;
            else
            {
                NUL++;
            }
        }
    }
    printf("\nSe encontraron\nPositivos: %d\nNegativos: %d\nNulos: %d", POS, NEG, NUL);
}