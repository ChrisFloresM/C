#include <stdio.h>

void main(){
    float DIS,MIN,SEG,CEN,VMS,KMH,TSE;
    printf("\nIngrese distancia recorrida en metros: ");
    scanf("%f",&DIS);
    printf("\nIngrese minutos segundos y centesimas: ");
    scanf("%f %f %f",&MIN,&SEG,&CEN);
    TSE = MIN*60+SEG+CEN/100;
    VMS = DIS/TSE;
    KMH = VMS*3600/1000;
    printf("\nLa velocidad en km/h fue de: %4.2f km/h",KMH);
}