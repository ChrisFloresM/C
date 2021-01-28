#include <stdio.h>

void main()
{
    int R, M, MMAY, MMEN, RMAY, RMEN;
    float PROMM, PANU, SUM, PMMAY = 0.0, PMMEN = 50.0, NOR, CEN, SUR, GOL, PAC, CAR;
    printf("\nRegiones:\n1.Norte\n2.Centro\n3.Sur\n4.Golfo\n5.Pacifico\n6.Caribe\n");
    for (R = 1; R <= 6; R++)
    {
        SUM = 0;
        for (M = 1; M <= 12; M++)
        {
            printf("\nIngrese el promedio del mes %d en la region %d: ", M, R);
            scanf("%f", &PROMM);
            SUM = SUM+PROMM;
            if(PROMM > PMMAY)
            {
                PMMAY = PROMM;
                MMAY = M;
                RMAY = R;
            }
            if(PROMM < PMMEN)
            {
                PMMEN = PROMM;
                MMEN = M;
                RMEN = R;
            }
        }
        PANU = SUM/12.0;
        printf("\nPromedio anual de la region %d = %3.2f\n",R,PANU);
        switch(R)
        {
            case 3: SUR = PANU;break;
            case 5: PAC = PANU;break;
            case 6: CAR = PANU;break;
        }
    }
    printf("\nEL mayor promedio mensual se registro el mes %d en la region %d y fue de %3.2f",MMAY, RMAY, PMMAY);
    printf("\nEL menor promedio mensual se registro el mes %d en la region %d y fue de %3.2f",MMEN, RMEN, PMMEN);
    if(SUR > PAC && SUR > CAR)
    {
        printf("\nSUR tiene el mayor pormedio anual");
    }
    else
    {
        if(PAC > SUR && PAC > CAR)
        {
            printf("\nPACIFICIO tiene el mayor promedio anual");
        }
        else
        {
            printf("\nCARIBE tiene el mayor promedio anual");
        }
        
    }
    
}