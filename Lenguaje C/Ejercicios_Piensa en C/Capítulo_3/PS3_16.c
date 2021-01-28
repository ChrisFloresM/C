#include <stdio.h>

void main()
{
    int I, J, N;
    printf("\nIngrese hasta que numero realizar la serie: ");
    scanf("%d",&N);
    for(I = 1; I<=N; I++)
    {
        for(J = 1; J<=I; J++)
        {
            printf("%d ",J);
        }
        printf("\n");
    }
    for(I=N-1; I>=1; I--)
    {
        for(J = 1; J<=I; J++)
        {
            printf("%d ",J);
        }
        printf("\n");
    }
}