#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para criar um vetor com números pseudoaleatórios no intervalo [0, N-1]
int* createRandomVector(int N) {
    int* vector = (int*)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        vector[i] = rand() % N; // Gera números aleatórios entre 0 e N-1
    }

    return vector;
}

// Função para criar uma matriz para armazenar as ocorrências dos elementos de X e Y
int** createOccurrencesMatrix(int* X, int* Y, int N) {
    int** matrix = (int**)malloc(N * sizeof(int*));

    for (int i = 0; i < N; i++) {
        matrix[i] = (int*)malloc(N * sizeof(int));

        for (int j = 0; j < N; j++) {
            matrix[i][j] = 0; // Inicializa a matriz com zeros
        }
    }

    for (int i = 0; i < N; i++) {
        matrix[X[i]][Y[i]]++; // Incrementa a ocorrência na posição correspondente da matriz
    }

    return matrix;
}

// Função para imprimir uma matriz
void printMatrix(int** matrix, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Função principal
int main() {
    srand(time(NULL));

    int N;

    printf("Informe a dimensao N: ");
    scanf("%d", &N);

    int* X = createRandomVector(N);
    int* Y = createRandomVector(N);

    printf("Vetor X:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", X[i]);
    }
    printf("\n");

    printf("Vetor Y:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", Y[i]);
    }
    printf("\n");

    int** occurrencesMatrix = createOccurrencesMatrix(X, Y, N);

    printf("Matriz de Ocorrencias:\n");
    printMatrix(occurrencesMatrix, N);

    // Liberar memória alocada
    free(X);
    free(Y);

    for (int i = 0; i < N; i++) {
        free(occurrencesMatrix[i]);
    }
    free(occurrencesMatrix);

    return 0;
}