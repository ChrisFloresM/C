#include <stdio.h>

void main(){
    int N1,N2,N3, R;
    printf("\nIngrese 3 numeros enteros: ");
    scanf("%d %d %d",&N1,&N2,&N3);
    if(N1 != N2 && N2 != N3 && N3 != N1){
        if(N1 > N2)
            printf("\nLos numeros no estan ordenados");
        else 
            if(N2 > N3){
                printf("\nLos numeros no estan ordenados");
            }
            else
                printf("\nLos numeros si estan ordenados");
    }
    else{
        printf("\nLos numeros no son validos");
    }
}