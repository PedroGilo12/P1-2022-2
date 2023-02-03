#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double n1;
double n2;
double n3;

double mediaA;
double mediaP;

int main() {
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    mediaA = (n1+n2+n3)/3;
    mediaP = ( (n1*2) + (n2*2) + (n3*3) )/ 7;

    printf("%.2lf\n%.2lf\n", mediaA, mediaP);

    mediaP = ( (n1*1) + (n2*2) + (n3*2) )/ 5;

    printf("%.2lf\n", mediaP);

	return 0;
}