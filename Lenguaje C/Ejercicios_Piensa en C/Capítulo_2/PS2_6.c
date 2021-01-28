#include <stdio.h>

void main(){
    int N1,N2,N3;
    printf("\nIngrese los numeros N1 N2 N3: ");
    scanf("%d %d %d",&N1,&N2,&N3);
    if(N1 == N2){
        if(N2 == N3){
            printf("\nNumeros iguales");
        }
        else{
            if(N2 > N3)
                printf("\nN1 es igual a N2 y mayores a N3");
            else 
                printf("\nN3 es el mayor");
        }
    }
    else{
        if(N1 == N3){
            if(N1 > N2)
                printf("\nN1 es igual a N3 y mayores a N2");
            else 
                printf("\nN2 es el mayor");
        }
        else{
            if(N3 == N2){
                if(N3 > N1)
                    printf("\nN2 es igual a N3 y mayores a N1");
                else 
                    printf("\n N1 es el mayor");
            }
            else {
                if(N1 > N2){
                    if(N1 > N3)
                        printf("\nN1 es el mayor");
                    else
                        printf("\nN3 es el mayor");
                }
                else{
                    if(N2 > N3)
                        printf("\nN2 es el mayor");
                    else
                        printf("\nN3 es el mayor");
                }
            }
        }
    }
}