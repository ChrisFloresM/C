#include <stdio.h>

void main(){
    int CAT,PHE,PAG;
    float SAL;
    printf("\nIngrese el salario, la categoria y las horas extras del trabajador: ");
    scanf("%f %d %d",&SAL,&CAT,&PHE);
    if(CAT < 4){
        switch(CAT){
            case 1: PAG = 40;break;
            case 2: PAG = 50;break;
            case 3: PAG = 85;break;
            default: PAG = -1;break;
        }
        if(PAG > -1){
            if(PHE < 30)
                SAL = SAL + PAG*PHE;
            else
                SAL = SAL + PAG*30;
        }
    }
    else{
        printf("\nNo recibe el beneficio");
    }
    printf("\nEl salario final del trabajador sera de: %4.2f pesos",SAL);
}