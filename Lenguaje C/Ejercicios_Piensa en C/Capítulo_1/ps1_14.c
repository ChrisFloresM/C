#include <stdio.h>
#include <math.h>

void main(){
    float x1,y1,x2,y2,x3,y3,AREA;
    printf("\nIngrese las coordenadas del primer punto: ");
    scanf("%f %f",&x1,&y1);
    printf("\nIngrese las coordenadas del segundo punto: ");
    scanf("%f %f",&x2,&y2);
    printf("\nIngrese las coordenadas del tercer punto: ");
    scanf("%f %f",&x3,&y3);
    AREA = (1.0/2.0)*fabs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    printf("\nEl area es: %4.2f",AREA);
}