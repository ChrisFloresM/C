#include <stdio.h>

void main()
{
    int SEX, EDAD, I, N, CM = 0, CF = 0;
    float PES, ALT, SPM = 0.0, SPF = 0.0, SAM = 0.0, SAF = 0.0, PPF, PPM, PAF, PAM;
    printf("\nCuantas personas va a registrar?: ");
    scanf("%d", &N);
    for (I = 1; I <= N; I++)
    {
        printf("\nIngrese sexo, edad, peso y altura de la persona %d: ", I);
        scanf("%d %d %f %f", &SEX, &EDAD, &PES, &ALT);
        if (EDAD >= 18)
        {
            if (SEX == 0)
            {
                CF++;
                SPF += PES;
                SAF += ALT;
            }
            else
            {
                CM++;
                SPM += PES;
                SAM += ALT;
            }
        }
    }
    PPM = SPM/CM;
    PAM = SAM/CM;
    PPF = SPF/CF;
    PAF = SAF/CF;
    printf("\nEl promedio de peso de hombres es de: %3.2f kg",PPM);
    printf("\nEl promedio de altura de hombres es de: %3.2f m",PAM);
    printf("\nEl promedio de peso de mujeres es de: %3.2f kg",PPF);
    printf("\nEl promedio de altura de mujeres es de: %3.2f m",PAF);
}