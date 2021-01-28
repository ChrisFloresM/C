#include <stdio.h>

void main()
{
    int L, NV, LOC, CAN, VL1, VL2, VL3, VL4, VL5, VL6;
    float PRE, L1, L2, L3, L4, L5, L6, REC = 0, MON = 0;
    for (L = 1; L <= 6; L++)
    {
        printf("\nIngrese el precio de la localidad %d: ", L);
        scanf("%f", &PRE);
        switch (L)
        {
        case 1:
            L1 = PRE;
            break;
        case 2:
            L2 = PRE;
            break;
        case 3:
            L3 = PRE;
            break;
        case 4:
            L4 = PRE;
            break;
        case 5:
            L5 = PRE;
            break;
        case 6:
            L6 = PRE;
            break;
        }
    }
    VL1 = 0;
    VL2 = 0;
    VL3 = 0;
    VL4 = 0;
    VL5 = 0;
    VL6 = 0;
    printf("\nRealizar una nueva venta (1 - SI 0 - NO): ");
    scanf("%d", &NV);
    while (NV == 1)
    {
        printf("\nIngrese la localidad y la cantidad de boletos: ");
        scanf("%d %d", &LOC, &CAN);
        switch (LOC)
        {
        case 1:
            MON = CAN * L1;
            VL1 += CAN;
            break;
        case 2:
            MON = CAN * L2;
            VL2 += CAN;
            break;
        case 3:
            MON = CAN * L3;
            VL3 += CAN;
            break;
        case 4:
            MON = CAN * L4;
            VL4 += CAN;
            break;
        case 5:
            MON = CAN * L5;
            VL5 += CAN;
            break;
        case 6:
            MON = CAN * L6;
            VL6 += CAN;
            break;
        }
        REC = REC + MON;
        printf("\nEl monto a pagar es de: %4.2f pesos", MON);
        printf("\nRealizar una nueva venta (1 - SI 0 - NO): ");
        scanf("%d", &NV);
    }
    printf("\nCantidad de boletos vendidos: ");
    printf("\nLocalidad 1: %d", VL1);
    printf("\nLocalidad 2: %d", VL2);
    printf("\nLocalidad 3: %d", VL3);
    printf("\nLocalidad 4: %d", VL4);
    printf("\nLocalidad 5: %d", VL5);
    printf("\nLocalidad 6: %d", VL6);
    printf("\nRecaudacion total: %4.2f", REC);
}