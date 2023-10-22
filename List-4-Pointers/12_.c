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
    int *Y = (int *)malloc(N * sizeof(int));
    int **M = (int **)malloc(N * sizeof(int *));

    if (X == NULL || Y == NULL || M == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    // Inicializa o gerador de números pseudoaleatórios com uma semente
    srand(time(NULL));

    // Preenche o vetor X com números pseudoaleatórios entre 0 e N-1
    for (int i = 0; i < N; i++) {
        X[i] = rand() % N;
    }

    // Preenche o vetor Y com base nas regras especificadas
    for (int i = 0; i < N; i++) {
        int r = rand() % 11; // Gera um número aleatório entre 0 e 10
        if (r >= 0 && r <= 3) {
            Y[i] = X[i];
        } else if (r > 3 && r <= 5) {
            Y[i] = X[i] - 1;
        } else if (r > 5 && r <= 7) {
            Y[i] = X[i] + 1;
        } else if (r > 7 && r <= 9) {
            Y[i] = X[i] - 2;
        } else {
            Y[i] = X[i] + 2;
        }
    }

    // Aloca memória para a matriz M e a inicializa com zeros
    for (int i = 0; i < N; i++) {
        M[i] = (int *)calloc(N, sizeof(int));
    }

    // Preenche a matriz M com as coocorrências dos elementos de X e Y
    for (int i = 0; i < N; i++) {
        M[X[i]][Y[i]]++;
    }

    // Imprime a matriz M
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    // Libera a memória alocada
    free(X);
    free(Y);
    for (int i = 0; i < N; i++) {
        free(M[i]);
    }
    free(M);

    return 0;
}