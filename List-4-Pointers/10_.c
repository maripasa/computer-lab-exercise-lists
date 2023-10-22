#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s N\n", argv[0]);
        return 1;
    }

    int N = atoi(argv[1]);
    if (N <= 0) {
        printf("N deve ser um número inteiro positivo.\n");
        return 1;
    }

    int *X = (int *)malloc(N * sizeof(int));
    int *F = (int *)calloc(N, sizeof(int)); // Inicializa F com zeros

    if (X == NULL || F == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    // Inicializa o gerador de números pseudoaleatórios com uma semente
    srand(time(NULL));

    // Preenche o vetor X com números pseudoaleatórios entre 0 e N-1
    for (int i = 0; i < N; i++) {
        X[i] = rand() % N;
    }

    printf("Vetor X = [");
    for (int i = 0; i < N; i++) {
        printf(" %d", X[i]);
        F[X[i]]++;
    }
    printf(" ]\n");

    printf("Vetor F = [");
    for (int i = 0; i < N; i++) {
        printf(" %d", F[i]);
    }
    printf(" ]\n");

    free(X);
    free(F);

    return 0;
}