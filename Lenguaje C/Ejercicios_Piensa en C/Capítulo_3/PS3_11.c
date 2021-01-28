#include <stdio.h>

void main()
{
    int N, J, I;
    float VIN, TV1 = 0.0, TV2 = 0.0, TV3 = 0.0, TV4 = 0.0, PTOT;
    printf("\nCunatos años de produccion va a registrar: ");
    scanf("%d", &N);
    for (I = 1; I <= N; I++)
    {
        for (J = 1; J <= 4; J++)
        {
            printf("\nIngrese la cantidad de vino tipo %d producida en el año %d: ", J, I);
            scanf("%f", &VIN);
            switch (J)
            {
            case 1:
                TV1 = TV1 + VIN;
                break;
            case 2:
                TV2 = TV2 + VIN;
                break;
            case 3:
                TV3 = TV3 + VIN;
                break;
            case 4:
                TV4 = TV4 + VIN;
                break;
            }
        }
    }
    PTOT = TV1 + TV2 + TV3 + TV4;
    printf("\nProducción de tipo 1: %4.2f litros", TV1);
    printf("\nProducción de tipo 2: %4.2f litros", TV2);
    printf("\nProducción de tipo 3: %4.2f litros", TV3);
    printf("\nProducción de tipo 4: %4.2f litros", TV4);
    printf("\nProducción total: %4.2f litros", PTOT);
}