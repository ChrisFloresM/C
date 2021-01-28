#include <stdio.h>

void main()
{
    int N1, N2, RES, a, b, mcd;
    printf("\nIngrese los numeros N1 y N2: ");
    scanf("%d %d", &N1, &N2);
    if (N1 > N2)
    {
        a = N1;
        b = N2;
    }
    else
    {
        a = N2;
        b = N1;
    }
    do
    {
        RES = a % b;
        if (RES != 0)
        {
            a = b;
            b = RES;
        }
    } while (RES != 0);
    printf("\nEl MCD de los numeros %d y %d es: %d", N1, N2, b);
}