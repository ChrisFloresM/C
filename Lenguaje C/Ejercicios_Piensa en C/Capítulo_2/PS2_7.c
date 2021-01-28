#include <stdio.h>
#include <math.h>

void main(){
    int y,RES,c;
    float x;
    printf("\nIngrese valor de y: ");
    scanf("%d",&y);
    RES = y % 4;
    printf("RES = %d",RES);
    switch(RES){
        case 0: x = pow(y,3);c=1;break;
        case 1: x = (pow(y,2)-14)/pow(y,3);c=1;break;
        case 2: x = pow(y,3)-5;c=1;break;
        case 3: x = sqrt(y);c=1;break;
        default: c=0;break;
    }
    if(c == 1)
        printf("\nx es igual a %4.2f",x);
    else
        printf("\nResultado no válido");
}