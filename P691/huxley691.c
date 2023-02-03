#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int n1;
int n2;

int main() {
    scanf("%d %d", &n1, &n2);

    if(n1 > n2) {
        printf("%d %d", n2, n1);
    } else {
        printf("%d %d", n1, n2);
    }

	return 0;
}