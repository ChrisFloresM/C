#include <stdio.h>

void main(){
    int D1,D2,D3,D4,R;
    printf("\nIngrese un numero de 4 digitos: ");
    scanf("%d %d %d %d",&D1,&D2,&D3,&D4);
    if(D1%2 == 0){
        if(D2%2 == 0){
            if(D3%2 == 0){
                if(D4%2 == 0){
                    R = 1;
                }
                else
                {
                    R = 0;
                }
                
            }
            else
            {
                R = 0;
            }
            
        }
        else
        {
            R = 0;
        }
        
    }
    else
    {
        R = 0;
    }
    if(R == 1){
        printf("\nTodos los digitos del numero %d %d %d %d son numeros pares",D1,D2,D3,D4);
    }
    else
    {
        printf("\nEl numero %d %d %d %d no cumple con la condicion",D1,D2,D3,D4);
    }
}