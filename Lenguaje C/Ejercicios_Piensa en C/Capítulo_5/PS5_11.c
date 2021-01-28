#include <stdio.h>

int I;
int perfecto(long);
void imprime(long *);

void main()
{
    long PER[4], J = 6;
    int eval;
    for (I = 0; I < 4; I++)
    {
        eval = 0;
        while (eval == 0)
        {
            eval = perfecto(J);
            J++;
        }
        PER[I] = J-1;
    }
    printf("\nLos numeros perfectos son: ");
    imprime(PER);
}

int perfecto(long N)
{
    int J, sum = 0, res;
    for (J = 1; J <= N / 2; J++)
    {
        if ((N % J) == 0)
        {
            sum = sum + J;
        }
    }
    if(sum == N)
    {
        res = 1;
    }
    else
    {
        res = 0;
    }
    return res;
}

void imprime(long A[])
{
    for(I = 0; I < 4; I++)
    {
        printf("\nPosicion %d: %ld", I+1, A[I]);
    }
}