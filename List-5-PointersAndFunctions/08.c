#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para criar uma matriz aleatória
int* createRandomMatrix(int rows, int cols) {
    int* matrix = (int*)malloc(rows * cols * sizeof(int));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i * cols + j] = rand() % 100; // Gerar números aleatórios entre 0 e 99
        }
    }

    return matrix;
}

// Função para binarizar a matriz com base em um limiar
int* binarizeMatrix(int* matrix, int rows, int cols, int threshold) {
    int* binaryMatrix = (int*)malloc(rows * cols * sizeof(int));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            binaryMatrix[i * cols + j] = (matrix[i * cols + j] > threshold) ? 1 : 0;
        }
    }

    return binaryMatrix;
}

// Função para imprimir uma matriz
void printMatrix(int* matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i * cols + j]);
        }
        printf("\n");
    }
}

// Função principal
int main(int argc, char* argv[]) {
    srand(time(NULL));

    if (argc != 4) {
        printf("Erro: Formato: %s <linhas> <colunas> <limiar>\n", argv[0]);
        return 1;
    }

    int rows = atoi(argv[1]);
    int cols = atoi(argv[2]);
    int threshold = atoi(argv[3]);

    int* randomMatrix = createRandomMatrix(rows, cols);

    printf("Matriz Original:\n");
    printMatrix(randomMatrix, rows, cols);

    int* binaryMatrix = binarizeMatrix(randomMatrix, rows, cols, threshold);

    printf("\nMatriz Binarizada (com base no limiar %d):\n", threshold);
    printMatrix(binaryMatrix, rows, cols);

    // Liberar memória alocada
    free(randomMatrix);
    free(binaryMatrix);

    return 0;
}
