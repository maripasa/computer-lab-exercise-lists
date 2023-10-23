//Dado um vetor x de inteiros de tamanho n. Dado um valor t também inteiro.
//Escreva uma função que modifique x conforme x = 1 se x1 > t e x = 0 se contrario

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RAN_LIM 10

int main() {

    int *x, t, n;

    printf("Qual o valor de n? (tamanho de x e y): ");
    scanf("%d", &n);

    x = malloc(n * sizeof(int));

    printf("Qual o valor de t?: ");
    scanf("%d", &t);

    for( int i = 0 ; i < n ; i++ ) {

        *(x + i) = rand() % RAN_LIM;

    }
}

int func(int *vetor, int n, int t) {

    for()

}