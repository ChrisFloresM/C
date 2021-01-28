#include <stdio.h>

float calc(int, float, float);

void main()
{
    int MES;
    float CAP, TAS, TOT; 
    printf("\nIngrese el capital: ");
    scanf("%f",&CAP);
    printf("\nIngrese el numero de meses: ");
    scanf("%d",&MES);
    printf("\nIngrese la tasa de interes mensual: ");
    scanf("%f",&TAS);
    TOT = calc(MES, CAP, TAS);
    printf("\nEl total de capital sera de %4.2f pesos",TOT);
}

float calc(int m, float cap, float tas)
{
    int I;
    for(I = 1; I<=m; I++)
    {
        cap += cap*tas;
    }
    return cap;
}


