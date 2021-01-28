#include <stdio.h>

void lectura(int *, int);
void ordensuce(int *, int);
void ordeninser(int *, int);
void elimina(int *, int *);

void main()
{
    int MAX = 50, NUM, P = 0, NE = 0, N = 0, I;
    do
    {
        printf("\nIndique de cuantos elementos sera el arreglo: ");
        scanf("%d", &NUM);
    } while (NUM < 1 || NUM > MAX);
    int ARRE[NUM];
    lectura(ARRE, NUM);
    ordeninser(ARRE, NUM);
    elimina(ARRE, &NUM);
    printf("\nEl arreglo ordenado y sin elementos repetidos es:\n");
    for (I = 0; I < NUM; I++)
    {
        printf("\t%d", ARRE[I]);
    }
}

void lectura(int A[], int N)
{
    int I;
    for (I = 0; I < N; I++)
    {
        printf("\nIngrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

void ordensuce(int A[], int N)
{
    int I, J, K, AUX;
    for (I = 1; I < N; I++)
    {
        J = I - 1;
        AUX = A[I];
        while (J >= 0 && A[J] > AUX)
        {
            A[J + 1] = A[J];
            J--;
        }
        A[J + 1] = AUX;
    }
}

void ordeninser(int A[], int N)
{
    int I, J, MEN, POS;
    for (I = 0; I < (N - 1); I++)
    {
        MEN = A[I];
        POS = I;
        for (J = I + 1; J < N; J++)
        {
            if (A[J] < MEN)
            {
                MEN = A[J];
                POS = J;
            }
        }
        A[POS] = A[I];
        A[I] = MEN;
    }
}

void elimina(int A[], int *N)
{
    int I, J, K;
    for (I = 0; I < *N - 1; I++)
    {
        for (J = I + 1; J < *N; J++)
        {
            if (A[I] == A[J])
            {
                for (K = J; K < *N; K++)
                {
                    A[K] = A[K + 1];
                }
                *N = *N - 1;
            }
        }
    }
}