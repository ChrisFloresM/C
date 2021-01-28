#include <stdio.h>

float prompar(int);
float promimpar(int);

void main()
{
    int NNUE, NUM;
    float PPAR, PIMPAR;
    printf("\nDesea agregar un nuevo numero: ");
    scanf("%d", &NNUE);
    while (NNUE != 0)
    {
        printf("\nIngrese el valor del numero: ");
        scanf("%d", &NUM);
        if (NUM % 2 == 0)
        {
            PPAR = prompar(NUM);
        }
        else
        {
            PIMPAR = promimpar(NUM);
        }
        printf("\nDesea agregar un nuevo numero: ");
        scanf("%d", &NNUE);
    }
    printf("\nEl promedio de los numeros pares es de: %4.2f y de los impares es de %4.2f", PPAR, PIMPAR);
}

float prompar(int n)
{
    static int sum = 0, cont;
    float prom;
    sum += n;
    cont++;
    prom = ((float)sum / cont);
    return prom;
}

float promimpar(int n)
{
    static int sum = 0, cont;
    float prom;
    sum += n;
    cont++;
    prom = ((float)sum / cont);
    printf("\nEl promedio de los numeros impares es de: %4.2f", prom);
    return prom;
}