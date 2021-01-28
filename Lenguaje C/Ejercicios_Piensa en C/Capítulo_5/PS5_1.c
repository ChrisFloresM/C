#include <stdio.h>

void cuenta(int *, int, int *, int *, int *);
void lectura(int *, int);

void main()
{
    int MAX = 15, NUM, P = 0, NE = 0, N = 0;
    do
    {
        printf("\nIndique de cuantos elementos sera el arreglo: ");
        scanf("%d",&NUM);
    } while (NUM < 1 || NUM > MAX);
    int ARRE[NUM];
    lectura(ARRE, NUM);
    cuenta(ARRE, NUM, &P, &NE, &N);
    printf("\nPositivos: %d",P);
    printf("\nNegativos: %d",NE);
    printf("\nNulos: %d",N);
}

void cuenta(int A[], int N, int *PO, int *NEG, int *NUL)
{
    int I;
    for(I = 0; I < N; I++)
    {
        if(A[I] > 0)
        {
            *PO = *PO + 1;
        }
        else
        {
            if(A[I] < 0)
            {
                *NEG = *NEG + 1;
            }
            else
            {
                *NUL = *NUL + 1;
            }
        }    
    }
}

void lectura(int A[], int N)
{
    int I;
    for(I = 0; I < N; I++)
    {
        printf("\nIngrese el elemento %d: ", I+1);
        scanf("%d",&A[I]);
    }
}