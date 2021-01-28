#include <stdio.h>

void main()
{
    long FIB[100], I;
    for (I = 0; I < 20; I++)
    {
        if (I <= 1)
        {
            FIB[I] = I;
        }
        else
        {
            FIB[I] = FIB[I - 1] + FIB[I - 2];
        }
        printf("\t%d",FIB[I]);
    }
}