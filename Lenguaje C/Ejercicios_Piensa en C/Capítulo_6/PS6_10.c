#include <stdio.h>

const int N = 5;

void imprimir(int[][N], int, int);
int moverCaballo(int[][N], int, int, int, int *);

void main()
{
    int TAB[5][5] = {0}, INIF, INIC, R, NUMS = 1;
    do
    {
        printf("\nIndique la fila de inicio: ");
        scanf("%d", &INIF);
    } while (INIF < 0 || INIF > N-1);
    do
    {
        printf("\nIndique la columna de inicio: ");
        scanf("%d", &INIC);
    } while (INIC < 0 || INIC > N-1);
    TAB[INIF][INIC] = 1;
    R = moverCaballo(TAB, INIF, INIC, 2, &NUMS);
    if(!NUMS)
    {
        printf("\nFin de camino\n");
        imprimir(TAB, N, N);
    }
}

void imprimir(int A[][N], int F, int C)
{
    int I, J;
    printf("\n\nEl tablero es:");
    for (I = 0; I < F; I++)
    {
        printf("\n");
        for (J = 0; J < C; J++)
        {
            printf("%3d ", A[I][J]);
        }
    }
}

int moverCaballo(int A[][N], int FA, int CA, int VAL, int *EVAL)
{
    int VF[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
    int VC[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int S = 1, I = 0, NF, NC, NP;
    while (I < 8 && *EVAL == 1)
    {
        NF = FA + VF[I];
        NC = CA + VC[I];
        if (NF < 0 || NC < 0 || NF > N-1 || NC > N-1)
        {
            I++;
        }
        else
        {
            if (A[NF][NC])
            {
                I++;
            }
            else
            {
                A[NF][NC] = VAL;
                if (VAL < N*N)
                {
                    NP = moverCaballo(A, NF, NC, VAL + 1, EVAL);
                    if(!NP)
                    {
                        A[NF][NC] = 0;
                        I++;
                    }
                }
                else
                {
                    *EVAL = 0;
                }
            }
        }
    }
    if( I == 8)
    {
        S = 0;
    }
    return S;
}
