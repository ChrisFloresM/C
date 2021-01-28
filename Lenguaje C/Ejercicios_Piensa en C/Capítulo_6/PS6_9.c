#include <stdio.h>
const int MAX = 8;

void mostrarTablero(int[][MAX], int, int);
int compruebaPos(int[][MAX], int, int, int);
int buscafila(int[][MAX], int, int, int);

/*Función principal*/
void main()
{
    int TAB[8][8] = {0};
    int I, F, C, S, FAN;
    for (I = 0; I < 8; I++)
    {
        F = 0;
        C = I;
        S = 0;
        while (S == 0)
        {
            S = compruebaPos(TAB, F, C, 8);
            if (S == 0)
            {
                if (F < 7)
                {
                    F++;
                }
                else
                {
                    C--;
                    I--;
                    FAN = buscafila(TAB, 0, C, 8);
                    TAB[FAN][C] = 0;
                    F = FAN + 1;
                }
            }
        }
        TAB[F][C] = 1;
    }
    mostrarTablero(TAB, 8, 8);
}

/*Funcion para imprimir el tablero*/
void mostrarTablero(int T[][MAX], int N, int M)
{
    int I, J;
    printf("\nEl tablero es:\n");
    for (I = 0; I < N; I++)
    {
        for (J = 0; J < N; J++)
        {
            printf("%d ", T[I][J]);
        }
        printf("\n");
    }
    printf("\n");
}

/*Funcion para verificar que la posicion es segura*/
int compruebaPos(int T[][MAX], int F, int C, int N)
{
    int I, J, RES = 1;
    /*Ciclo que verifica que en la fila no se encuentre otra reina*/
    for (I = 0; I < N; I++)
    {
        if (T[F][I])
        {
            RES = 0;
            return RES;
        }
    }
    /*Ciclo que verifica que en la diagonal descendente derecha no se encuentre otra reina*/
    for (I = F, J = C; I < N && J < N; I++, J++)
    {
        if (T[I][J])
        {
            RES = 0;
            return RES;
        }
    }
    /*Ciclo que verifica que en la diagonal descendente izquierda no se encuentre otra reina*/
    for (I = F, J = C; I >= 0 && J >= 0; I--, J--)
    {
        if (T[I][J])
        {
            RES = 0;
            return RES;
        }
    }
    /*Ciclo que verifica que en la diagonal ascendente derecha no se encuentre otra reina*/
    for (I = F, J = C; I >= 0 && J < N; I--, J++)
    {
        if (T[I][J])
        {
            RES = 0;
            return RES;
        }
    }
    /*Ciclo que verifica que en la diagonal ascendente izquierda no se encuentre otra reina*/
    for (I = F, J = C; I < N && J >= 0; I++, J--)
    {
        if (T[I][J])
        {
            RES = 0;
            return RES;
        }
    }
    return RES;
}

/*Funcion para encontrar la fila con la reina colocada en la columna C*/
int buscafila(int T[][MAX], int F, int C, int N)
{
    int I = F, RES, E = 0;
    while (E == 0 && I < N)
    {
        if (T[I][C])
        {
            RES = I;
            E = 1;
        }
        else
        {
            I++;
        }
    }
    return RES;
}