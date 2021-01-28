#include <stdio.h>

void main()
{
    int N, I, J, E = 1;
    printf("\nHasta que numero desea hacer la serie: ");
    scanf("%d", &N);
    for (I = N; I >= 1; I--)
    {
        for (J = 1; J <= I; J++)
        {
            printf("%d ", J);
        }
        for (J = 1; J <= E; J++)
        {
            printf(" ");
        }
        for (J = I; J >= 1; J--)
        {
            printf(" %d", J);
        }
        if (I <= 9)
        {
            E += 4;
        }
        else
        {
            E += 6;
        }
        printf("\n");
    }
}