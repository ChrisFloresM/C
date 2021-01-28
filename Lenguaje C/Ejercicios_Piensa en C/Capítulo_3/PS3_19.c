#include <stdio.h>

void main()
{
    int I, J, K = 1, H = 1;
    for (I = 1; I <= 10; I++)
    {
        for (J = 0; J < (10 - I); J++)
        {
            printf(" ");
        }

        for (J = I; J <= K; J++)
        {
            printf("%d", J);
        }

        if (I > 5)
        {
            for (J = 0; J <= H; J++)
            {
                printf("%d", J);
            }
            for (J = H - 1; J >= 0; J--)
            {
                printf("%d", J);
            }
        }
        if (I < 6)
        {
            for (J = K - 1; J >= I; J--)
            {
                printf("%d", J);
            }
        }
        else
        {
            for (J = 9; J >= I; J--)
            {
                printf("%d", J);
            }
        }

        for (J = 0; J < 10 - I; J++)
        {
            printf(" ");
        }
        if (K < 9)
        {
            K += 2;
        }
        else
        {
            if(I >= 6)
                H += 2;
            K = 9;
        }
        printf("\n");
    }
}