#include <stdio.h>

int I;
void lectura(int *, int);
void unirarreglos(int *, int *, int *, int, int);
void ordenaA(int *, int);
void ordenaD(int *, int);
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
    ordenaA(VEC1, N);
    printf("\n\nEl arreglo 1 ordenado es: ");
    imprime(VEC1, N);
    ordenaD(VEC2, M);
    printf("\n\nEl arreglo 2 ordenado es: ");
    imprime(VEC2, M);
    unirarreglos(VEC1, VEC2, VEC3, N, T);
    printf("\n\nEl arreglo 3 es: ");
    imprime(VEC3, T);
    ordenaA(VEC3, T);
    printf("\n\nEl arreglo 3 ordenado es:  ");
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

void ordenaA(int A[], int N)
{
    int J, K, MEN, POS;
    for(I = 0; I < (N-1); I++)
    {
        MEN = A[I];
        POS = I;
        for(J = I+1; J < N; J++)
        {
            if(A[J] < MEN)
            {
                MEN = A[J];
                POS = J;
            } 
        }
        A[POS] = A[I];
        A[I] = MEN;
    }
}

void ordenaD(int A[], int N)
{
    int J, K, AUX;
    for(I = 0; I < (N-1); I++)
    {
        J = I+1;
        AUX = A[J];
        K = I;
        while(K >= 0 && A[K] < AUX)
        {
            A[K+1] = A[K];
            K--;
        }
        A[K+1] = AUX;
    }
}

void imprime(int A[], int N)
{
    for(I = 0; I < N; I++)
    {
        printf("\nPosicion %d: %d",I+1,A[I]);
    }
}