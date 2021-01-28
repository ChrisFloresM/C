#include <stdio.h>
#include <math.h>

void main()
{
    float L1, L2, L3, S, A;
    int T;
    printf("\nIngrese los 3 lados del triangulo L1 L2 L3: ");
    scanf("%f %f %f", &L1, &L2, &L3);
    if ((L1 + L2) > L3)
    {
        if ((L1 + L3) > L2)
        {
            if ((L2 + L3) > L1)
                T = 1;
            else
                T = 0;
        }
        else
            T = 0;
    }
    else
        T = 0;
    if (T == 1)
    {
        if (L1 == L2 && L2 == L3 && L3 == L1)
        {
            printf("\nEs un triangulo equilatero");
        }
        else
        {
            if (L1 != L2 && L2 != L3 && L3 != L1)
            {
                printf("\nEs un triangulo escaleno");
            }
            else
            {
                printf("\nEs un triangulo isoceles");
            }
        }
        S = (L1 + L2 + L3) / 2.0;
        A = sqrt(S * (S - L1) * (S - L2) * (S - L3));
        printf("\nSu area es de: %.2f", A);
    }
    else
        printf("\nNo es un triangulo");
}