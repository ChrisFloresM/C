#include <stdio.h>

void insertar(int *, int *, int);
void eliminar(int *, int *, int);
void imprimir(int *, int);
void ordenar(int *, int);

void main()
{
    int N = 1, VEC[N], I, C, ELE, O = 1;
    VEC[0] = 2;
    do
    {
        printf("\nQue numero desea insertar/Eliminar: ");
        scanf("%d", &ELE);
        do
        {
            printf("\nInsertar -> 1 Eliminar -> 0: ");
            scanf("%d", &C);
        } while (C > 1 || C < 0);
        if (C == 1)
        {
            if (N < 9)
            {
                printf("\nHa seleccionado insertar elemento");
                insertar(VEC, &N, ELE);
            }
            else
            {
                printf("\nNo es posible insertar mas elementos");
            }
        }
        else
        {
            if(N > 1)
            {
                printf("\nHa seleccionado eliminar elemento");
                eliminar(VEC, &N, ELE);
            }
            else
            {
                printf("\nNo es posible eliminar mas elementos");
            }
            
        }
        ordenar(VEC, N);
        imprimir(VEC, N);
         do
        {
            printf("\nContinuar -> 1 Salir -> 0: ");
            scanf("%d", &O);
        } while (O > 1 || O < 0);
    } while (O == 1);
}

void eliminar(int V[], int *N, int E)
{
    int I, R = 0, J;
    for (I = 0; I < *N; I++)
    {
        if (E == V[I])
        {
            R = 1;
            for(J = I; J < *N; J++)
            {
                V[J] = V[J+1];
            }
            *N = *N-1;
            break;
        }
    }
    if (R == 0)
    {
        printf("\nEL elemento no se encuentra en el arreglo");
    }
}

void insertar(int V[], int *N, int E)
{
    int I, R = 0;
    for (I = 0; I < *N; I++)
    {
        if (E == V[I])
        {
            R = 1;
            break;
        }
    }
    if (R == 1)
    {
        printf("\nEL elemento ya se encuentra en el arreglo");
    }
    else
    {
        *N = *N + 1;
        V[*N - 1] = E;
    }
}

void imprimir(int V[], int N)
{
    int I;
    for (I = 0; I < N; I++)
    {
        printf("\nPosicion %d: %d", I + 1, V[I]);
    }
}

void ordenar(int A[], int N)
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