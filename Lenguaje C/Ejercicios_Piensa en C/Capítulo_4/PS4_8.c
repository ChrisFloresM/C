#include <stdio.h>

int perf(int);

void main()
{
    int num, tot;
    printf("\nIngrese el numero hasta el cual calcular los numeros perfectos: ");
    scanf("%d", &num);
    tot = perf(num);
    printf("\nSe han encontrado %d numeros perfectos entre 1 y %d", tot, num);
}

int perf(int n)
{
    int I, J, sum, p = 0;
    for (J = 1; J <= n; J++)
    {
        sum = 0;
        for (I = 1; I <= J / 2; I++)
        {
            if (J % I == 0)
            {
                sum += I;
            }
        }
        if (sum == J)
        {
            p++;
        }
    }
    return p;
}