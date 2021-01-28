#include <stdio.h>

void main()
{
    int N, S = 0,I;
    float R = 1.0;
    printf("\nIngrese el numero hasta el cual desea que llegue la serie: ");
    scanf("%d", &N);
    for (I = 2; I <= N; I++)
    {
        if (S == 0)
        {
            R /= (1.0 / I);
            S = 1;
        }
        else
        {
            R *= 1.0 / I;
            S = 0;
        }
    }
    printf("\nEl resultado es %4.2f", R);
}