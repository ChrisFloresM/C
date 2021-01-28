#include <stdio.h>

const int N = 10;

void diagonalPrincipal(int[][N], int, int);
void imprime(int[][N], int, int);

void main()
{
    int MAT[N][N];
    diagonalPrincipal(MAT, N, N);
    imprime(MAT, N, N);
}

void diagonalPrincipal(int A[][N], int F, int C)
{
    int I, J;
    for (I = 0; I < F; I++)
    {
        for (J = 0; J < C; J++)
        {
            if ((I == J) || (J == (N - 1 - I)))
            {
                A[I][J] = 1;
            }
            else
            {
                A[I][J] = 0;
            }
        }
    }
}

void imprime(int A[][N], int F, int C)
{
    int I, J;
    for (I = 0; I < F; I++)
    {
        printf("\n");
        for (J = 0; J < C; J++)
        {
            printf("%d ", A[I][J]);
        }
    }
}