#include <stdio.h>

void main()
{
    int MED, SME, VAL;
    float TOT;
    printf("\nQue tipo de unidades va a convertir:\n1.Longitud\n2.Volumen\n3.Peso\nNumero a usar: ");
    scanf("%d", &MED);
    if (MED == 1)
    {
        printf("\nSeleccione unidades de origen y de destino:\n1.in - mm\n2.yarda-metro\n3.milla-kilometro\n4.in2 - cm2\n5.pie2 - m2\n6.yarda2 - metro2\n7.acre - hectarea\n8.milla2 - km2\nNumero a usar: ");
        scanf("%d", &SME);
        printf("\nIngrese la cantidad a convertir: ");
        scanf("%d",&VAL);
        switch (SME)
        {
        case 1:
            TOT = VAL * 25.4;
            printf("\n%d pulgadas equivalen a %4.2f milimetros", VAL, TOT);
            break;
        case 2:
            TOT = VAL * 0.9144;
            printf("\n%d yardas equivalen a %4.2f metros", VAL, TOT);
            break;
        case 3:
            TOT = VAL * 1.6093;
            printf("\n%d millas equivalen a %4.2f kilometros", VAL, TOT);
            break;
        case 4:
            TOT = VAL * 6.452;
            printf("\n%d pulgadas2 equivalen a %4.2f centimetros2", VAL, TOT);
            break;
        case 5:
            TOT = VAL * 0.09290;
            printf("\n%d pies2 equivalen a %4.2f metros2", VAL, TOT);
            break;
        case 6:
            TOT = VAL * 0.9290;
            printf("\n%d yardas2 equivalen a %4.2f metros2", VAL, TOT);
            break;
        case 7:
            TOT = VAL * 0.4047;
            printf("\n%d acres equivalen a %4.2f hectareas", VAL, TOT);
            break;
        case 8:
            TOT = VAL * 2.59;
            printf("\n%d millas2 equivalen a %4.2f kilometros2", VAL, TOT);
            break;
        default:
            printf("\nConversion invalida");
            break;
        }
    }
    else
    {
        if (MED == 2)
        {
            printf("\nSeleccione unidades de origen y de destino:\n1.pie3 - m3\n2.Yarda3 - m3\n3.pinta - litros\n4.Galon - litros\nNumero a usar: ");
            scanf("%d", &SME);
            printf("\nIngrese la cantidad a convertir: ");
            scanf("%d",&VAL);
            switch (SME)
            {
            case 1:
                TOT = VAL * 0.02832;
                printf("\n%d pies3 equivalen a %4.2f metros3", VAL, TOT);
                break;
            case 2:
                TOT = VAL * 0.7646;
                printf("\n%d yardas3 equivalen a %4.2f metros3", VAL, TOT);
                break;
            case 3:
                TOT = VAL * 0.56826;
                printf("\n%d pintas equivalen a %4.2f litros", VAL, TOT);
                break;
            case 4:
                TOT = VAL * 4.54609;
                printf("\n%d galones equivalen a %4.2f litros", VAL, TOT);
                break;
            default:
                printf("\nConversion invalida");
                break;
            }
        }
        else
        {
            if (MED == 3)
            {
                printf("\nSeleccione unidades de origen y de destino:\n1.onza - gramos\n2.libras a kilogramos\n3.tonelada inglea - toneladas\nNumero a usar: ");
                scanf("%d", &SME);
                printf("\nIngrese la cantidad a convertir: ");
                scanf("%d",&VAL);
                switch (SME)
                {
                case 1:
                    TOT = VAL * 28.35;
                    printf("\n%d onzas equivalen a %4.2f gramos", VAL, TOT);
                    break;
                case 2:
                    TOT = VAL * 0.45359;
                    printf("\n%d libras equivalen a %4.2f kilogramos", VAL, TOT);
                    break;
                case 3:
                    TOT = VAL * 1.0160;
                    printf("\n%d toneladas inglesas equivalen a %4.2f toneladas", VAL, TOT);
                    break;
                default:
                    printf("\nConversion invalida");
                    break;
                }
            }
        }
    }
}
