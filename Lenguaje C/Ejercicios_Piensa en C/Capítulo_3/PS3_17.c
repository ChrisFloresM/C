#include <stdio.h>

void main()
{
    int N, J, I;
    printf("\nIngrese el valor hasta el cual realizar la serie: ");
    scanf("%d",&N);
    for(I = 1; I <= N; I++)
    {
        for(J = 1; J<=I; J++)
        {
            printf("%d ",J);
        }
        for(J = I-1; J>=1;J--)
        {
            printf("%d ",J);
        }
        printf("\n");
    }
}