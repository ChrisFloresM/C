#include <stdio.h>
/* Aplicación de operadores. */
void main(void)
{
    float N1, N2, sum, res, mul;
    printf("\nIngrese los numeros N1 y N2:\n");
    scanf("%f %f", &N1, &N2);
    sum = N1+N2;
    res = N1-N2;
    mul = N1*N2;
    printf("\nLa suma es: %4.2f\nLa resta es: %4.2f\nLa multiplicacion es: %4.2f\n", sum, res, mul);
}
