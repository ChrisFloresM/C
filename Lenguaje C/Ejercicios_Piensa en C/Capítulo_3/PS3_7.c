#include <stdio.h>
#include <math.h>

void main()
{
    int S = 0, N, I;
    long RES = 0;
    printf("\nIngrese hasta que numero desea la serie: ");
    scanf("%d",&N);
    for(I = 1; I<= N; I++)
    {
        if(S == 0){
            RES += pow(I,I);
            S = 1;
        }
        else
        {
            RES -= pow(I,I);
            S = 0;
        }
    }
    printf("\nEl resultado es: %ld",RES);
}