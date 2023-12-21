#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para criar uma matriz aleatória
int** createRandomMatrix(int N) {
    int** matrix = (int**)malloc(N * sizeof(int*));

    for (int i = 0; i < N; i++) {
        matrix[i] = (int*)malloc(N * sizeof(int));

        for (int j = 0; j < N; j++) {
            matrix[i][j] = rand() % 10; // Gerar números aleatórios entre 0 e 9
        }
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

// Função para verificar se um número é par
int isEven(int num) {
    return num % 2 == 0;
}

// Função para verificar se a soma da diagonal principal é par ou ímpar
void checkDiagonalSum(int** matrix, int N) {
    int sum = 0;

    for (int i = 0; i < N; i++) {
        sum += matrix[i][i]; // Adiciona o elemento da diagonal principal
    }

    printf("Soma da diagonal principal: %d\n", sum);

    if (isEven(sum)) {
        printf("A soma da diagonal principal e par.\n");
    } else {
        printf("A soma da diagonal principal e impar.\n");
    }
}

// Função principal
int main() {
    srand(time(NULL));

    int N;

    printf("Informe a dimensao da matriz N x N: ");
    scanf("%d", &N);

    int** matrix = createRandomMatrix(N);

    printf("Matriz Gerada:\n");
    printMatrix(matrix, N);

    checkDiagonalSum(matrix, N);

    // Liberar memória alocada
    for (int i = 0; i < N; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}