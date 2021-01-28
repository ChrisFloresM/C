#include <stdio.h>

void captura(int *, int);
int palindrome(int *, int);

void main()
{
    int N, P = 0;
    do
    {
        printf("\nDe cuantos elementos es el vector: ");
        scanf("%d", &N);
    } while (N < 1 || N > 100);
    int ARR[N];
    captura(ARR, N);
    P = palindrome(ARR, N);
    if (P == 1)
    {
        printf("\nEs palindrome");
    }
    else
    {
        printf("\nNo es palindrome");
    }
}

void captura(int A[], int N)
{
    for (int I = 0; I < N; I++)
    {
        printf("\nElemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

int palindrome(int A[], int N)
{
    int I, res;
    for(I = 0; I < N; I++)
    {
        if(A[I] == A[(N-1)-I])
        {
            res = 1;
        }
        else
        {
            res = 0;
            break;
        }
    }
    return res;
}