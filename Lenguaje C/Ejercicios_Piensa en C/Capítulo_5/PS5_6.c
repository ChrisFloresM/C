#include <stdio.h>

void lectura(int *, int);
float promedio(int *, int);
float porcentaje(int *, int);
int mayores(int *, int);

void main()
{
    int N, CMAYOR;
    float PRO, PA;
    do
    {
        printf("\nCuantos alumnos va a registrar: ");
        scanf("%d",&N);
    } while (N < 1 || N > 100);
    int ALU[N];
    lectura(ALU, N);
    PRO = promedio(ALU, N);
    PA = porcentaje(ALU, N);
    CMAYOR = mayores(ALU, N);
    printf("\nEl promedio de calificaciones es: %4.2f",PRO);
    printf("\nEl procentaje de aprobacion es de: %4.2f porciento", PA);
    printf("\nSe encontraron %d alumnos con calificacion sobre 1500 puntos", CMAYOR);
}

void lectura(int A[], int N)
{
    int I;
    for(I = 0; I < N; I++)
    {
        printf("\nCalificacion del alumno %d: ",I+1);
        scanf("%d",&A[I]);
    }
}

float promedio(int A[], int N)
{
    int I, sum = 0;
    for(I = 0; I < N; I++)
    {
        sum = sum+A[I];
    }
    return (float)sum/N;
}

float porcentaje(int A[], int N)
{
    int I, ACUM = 0;
    float porc;
    for(I = 0; I < N; I++)
    {
        if(A[I] > 1300)
        {
            ACUM++;
        }
    }
    porc = ((float)ACUM/(float)N) * 100;
    return porc;
}

int mayores(int A[], int N)
{
    int I, ACUM = 0;
    for (I = 0; I < N; I++)
    {
        if(A[I] >= 1500)
        {
            ACUM++;
        }
    }
    return ACUM;
}