#include <stdio.h>
#include <math.h>

void main(){
    int T=1, P=1, R=1, EVAL;
    while((7*pow(T,4)-6*pow(P,3)+12*pow(R,5))<5850)
    {
        while((7*pow(T,4)-6*pow(P,3)+12*pow(R,5))<5850)
        {
            while((7*pow(T,4)-6*pow(P,3)+12*pow(R,5))<5850)
            {
                printf("\nValores: T: %d P: %d R: %d",T,P,R);
                R++;
            }
            R = 1;
            P++;
        }
        P = 1;
        T++;
    }
}