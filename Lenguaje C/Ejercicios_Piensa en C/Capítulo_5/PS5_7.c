#include <stdio.h>

void lectura(float *);
float promedio(float *);
int superior(float *, float);
int mayormes(float *);

void main()
{
    float COS[12], PRO;
    int SUP, MAYM;
    lectura(COS);
    PRO = promedio(COS);
    SUP = superior(COS, PRO);
    MAYM = mayormes(COS);
    printf("\nPROMEDIO: %4.2f", PRO);
    printf("\n%d meses tuvieron una cocecha mayor al promedio", SUP);
    printf("\nEl mes %d fue el mes de mayor cocecha",MAYM+1);
}

void lectura(float A[])
{
    int I;
    for(I = 0; I < 12; I++)
    {
        printf("\nIngrese la cocecha en el mes %d: ",I+1);
        scanf("%f",&A[I]);
    }
}

float promedio(float A[])
{
    int I;
    float sum = 0;
    for(I = 0; I < 12; I++)
    {
        sum = sum+A[I];
    }
    return sum/12;
}

int superior(float A[], float VAL)
{
    int I, n = 0;
    for(I = 0; I < 12; I++)
    {
        if(A[I] > VAL)
        {
            n++;
        }
    }
    return n;
}

int mayormes(float A[])
{
    int I, mmes = 0, nmes = 0;
    for(I = 0; I < 12; I++)
    {
        if(A[I] > mmes)
        {
            mmes = A[I];
            nmes = I;
        }
    }
    return nmes;
}