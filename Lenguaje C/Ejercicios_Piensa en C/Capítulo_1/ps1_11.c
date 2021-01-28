#include <stdio.h>
#include <math.h>

void main()
{
    float RAD, ALT, GEN, AB, AL, AT, V;
    printf("\nIngrese el radio, la alutra y la generatriz (R A G): ");
    scanf("%f %f %f", &RAD, &ALT, &GEN);
    AB = M_PI * pow(RAD, 2);
    AL = M_PI * RAD * GEN;
    AT = AB + AL;
    V = (1.0 / 3.0) * AB * ALT;
    printf("\nEl area de la base es: %4.2f\nEl area lateral es: %4.2f\nEl area total es: %4.2f\nEl volumen es: %4.2f\n",AB,AL,AT,V);
}
