#include <stdio.h>
#include <stdlib.h>

// Função para trocar dois elementos do array usando ponteiros
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função de ordenação bolha
void ordenarBolha(int *array, int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                trocar(&array[j], &array[j + 1]);
            }
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Uso: %s <elemento1> <elemento2> ... <elementoN>\n", argv[0]);
        return 1;
    }

    int tamanho = argc - 1;
    int *array = (int *)malloc(tamanho * sizeof(int));

    if (array == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        array[i - 1] = atoi(argv[i]);
    }

    printf("Array não ordenado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }

    ordenarBolha(array, tamanho);

    printf("\nArray ordenado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }

    free(array); // Libera a memória alocada

    return 0;
}