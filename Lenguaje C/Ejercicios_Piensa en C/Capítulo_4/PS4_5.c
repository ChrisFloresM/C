#include <stdio.h>
#include <math.h>

int serie(int);

void main()
{
    int N, res;
    printf("\nIngrese un numero N: ");
    scanf("%d",&N);
    res = serie(N);
    printf("\nEl resultado de la serie es: %d",res);
}

int serie(int n)
{
    int I, sel=1, ser = 1;
    for(I = 2; I<=n; I++)
    {
        if(sel == 1)
        {
            sel = 0;
            ser -= pow(I,I);
        }
        else
        {
            sel = 1;
            ser += pow(I,I);
        }
    }
    return ser;
}