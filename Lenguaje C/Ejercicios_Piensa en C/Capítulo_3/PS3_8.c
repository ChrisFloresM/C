#include <stdio.h>
#include <math.h>

void main()
{
    int I, N, Y;
    float X;
    printf("\nCon cuantos valores de Y desea evaluar la funcion: ");
    scanf("%d", &N);
    for (I = 1; I <= N; I++)
    {
        printf("\nIngrese el valor de %d Y: ", I);
        scanf("%d", &Y);
        if (Y == 0)
        {
            X = 0;
        }
        else
        {
            if (Y <= 15)
            {
                X = pow(Y, 2) + 15;
            }
            else
            {
                if (Y <= 30)
                {
                    X = pow(Y, 3) - pow(Y, 2) + 12;
                }
                else
                {
                    if (Y <= 60)
                    {
                        X = 4 * (pow(Y, 3) / pow(Y, 2)) + 8;
                    }
                    else
                    {
                        X = 0;
                    }
                }
            }
        }
        printf("\nEl resultado es: %4.2f",X);
    }
}