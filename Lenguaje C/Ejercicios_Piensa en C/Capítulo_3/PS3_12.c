#include <stdio.h>

void main()
{
    int I, N, J, P = 1, PRIG = 0, NPR1 = 1, NPR2 = 1, N2;
    printf("\nIngrese el numero N1: ");
    scanf("%d", &N);
    printf("\nIngrese el numero N2: ");
    scanf("%d", &N2);
    for (I = N; I <= N2; I++)
    {
        P = 1;
        J = 2;
        while (J < I && P == 1)
        {
            if (I % J != 0)
            {
                J++;
            }
            else
            {
                P = 0;
            }
        }
        if (P == 1)
        {
            NPR1 = I;
            if ((NPR1 - NPR2) == 2)
            {
                PRIG++;
                printf("\nSe encontro un par entre %d y %d", NPR1, NPR2);
            }
            NPR2 = NPR1;
        }
    }
    printf("\nSe encontraron %d numeros primos gemelos", PRIG);
}