#include <stdio.h>

void reordena(int *, int *, int *, int *);

void main()
{
    int D1, D2, D3, D4;
    printf("\nIngrese los 4 digitos: ");
    scanf("%d %d %d %d",&D1,&D2,&D3,&D4);
    reordena(&D1,&D2,&D3,&D4);
}

void reordena(int *d1, int *d2, int *d3, int *d4)
{
    printf("\nEl numero reordenado es: %d %d %d %d",*d4,*d3,*d2,*d1);
}