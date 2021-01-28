#include <stdio.h>

int I;
void lectura(int *, int);
void unirarreglos(int *, int *, int *, int, int);
void ordena(int *, int);
void imprime(int *, int);

void main()
{
    int N, M, T;
    do
    {
        printf("\nDe cuantos elementos es el arreglo 1: ");
        scanf("%d",&N);
    }while(N < 1 || N > 100);
    do
    {
        printf("\nDe cuantos elementos es el arreglo 2: ");
        scanf("%d",&M);
    }while(N < 1 || N > 100);
    T = N+M;
    int VEC1[N], VEC2[M], VEC3[T];
    printf("\n\nCaptura del arreglo 1: ");
    lectura(VEC1,N);
    printf("\n\nCaptura del arreglo 2: ");
    lectura(VEC2,M);
    unirarreglos(VEC1, VEC2, VEC3, N, T);
    printf("\nEl vector unido es: ");
    imprime(VEC3, T);
    ordena(VEC3, T);
    printf("\nEl vector ya ordenado es: ");
    imprime(VEC3, T);
}

void lectura(int A[], int N)
{
    for(I = 0; I < N; I++)
    {
        printf("\nIngrese el elemento %d: ", I+1);
        scanf("%d",&A[I]);
    }
}

void unirarreglos(int A[], int B[], int C[], int N, int T)
{
    for(I = 0; I < N; I++)
    {
        C[I] = A[I];
    }
    for(I = N; I < T; I++)
    {
        C[I] = B[I-N];
    }
}

void ordena(int A[], int N)
{
    int J, K, MAY, POS;
    for(I = 0; I < (N-1); I++)
    {
        MAY = A[I];
        POS = I;
        for(J = I+1; J < N; J++)
        {
            if(A[J] > MAY)
            {
                MAY = A[J];
                POS = J;
            } 
        }
        A[POS] = A[I];
        A[I] = MAY;
    }
}

void imprime(int A[], int N)
{
    for(I = 0; I < N; I++)
    {
        printf("\nPosicion %d: %d",I+1,A[I]);
    }
}