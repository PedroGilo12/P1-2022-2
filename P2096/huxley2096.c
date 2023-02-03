/*  Autor : PEDRO HENRIQUE VIEIRA GILÓ 
    Curso: Eng. da Computação 1º Periodo UFAL

    Descrição:

    Leia uma sequência de 1000 inteiros.

    Leia outro inteiro N, e seu programa deve imprimir quantas vezes o inteiro N aparece nos 1000 anteriores.

    O programa para quando o primeiro inteiro dos 1000 for igual a -1.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char numero[8];
int seq_numeros[1001];

int n = 0;
int k = 0;

int fim_arquivo = 0;

int main() {

    while(!fim_arquivo) {

        n = 0;
        k = 0;

        for(int x = 0; x < 1001; x++) {
            scanf("%s", numero);
            seq_numeros[x]= atoi(numero);

            if(seq_numeros[x] == -1) {
                fim_arquivo = 1;
            }
        }

        if(fim_arquivo) {
            break;
        }

        n = seq_numeros[1000];

        for(int x = 0; x<1000; x++) {
            if(n == seq_numeros[x]) {
                k++;
            }
        }
        
        printf("%d appeared %d times\n", n, k);
    }
    
    return 0;
}