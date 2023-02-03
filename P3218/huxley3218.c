#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double A;
double B;

int N = 13;

int main() {

    scanf("%lf %lf", &A, &B);

    while(A > B) {
        double pot = pow(2, N);

        if(A >= pot){
            if((A-pot)>=B){
                A = A - pot;

                printf("%.lf ", pot);
            }
        }

        N--;
        
    }    


	return 0;
}