#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int geraNumeroAleatorio(int min, int max);
void troca(int *a, int *b);
void ordenacaoPorSelecao(int vetor[], int tamanho);
void bubbleSort(int vetor[], int tamanho);

int main() {
    int min, max;

    printf("Informe o intervalo (min, max): ");
    scanf("%d %d", &min, &max);

    if (min >= max) {
        printf("Intervalo inválido. O valor mínimo deve ser menor que o valor máximo.\n");
        return 1;
    }

    int vetor[100];

    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        vetor[i] = geraNumeroAleatorio(min, max);
    }

    ordenacaoPorSelecao(vetor, 100);
    printf("Vetor ordenado por seleção:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    for (int i = 0; i < 100; i++) {
        vetor[i] = geraNumeroAleatorio(min, max);
    }

    // Bubble Sort
    bubbleSort(vetor, 100);
    printf("Vetor ordenado pelo bubble sort:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}


int geraNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ordenacaoPorSelecao(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int indiceMenor = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[indiceMenor]) {
                indiceMenor = j;
            }
        }
        troca(&vetor[i], &vetor[indiceMenor]);
    }
}

void bubbleSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                troca(&vetor[j], &vetor[j + 1]);
            }
        }
    }
}