#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copiarString(char *destino, const char *origem) {
    while (*origem) {
        *destino = *origem;
        destino++;
        origem++;
    }
    *destino = '\0'; // Adiciona o caractere nulo no final da string de destino
}

int main() {
    char stringOrigem[] = "Hello, World!";
    char *stringDestino = malloc(strlen(stringOrigem) + 1);

    if (stringDestino != NULL) {
        copiarString(stringDestino, stringOrigem);
        printf("String de destino: %s\n", stringDestino);
        free(stringDestino);
    } else {
        printf("Falha na alocação de memória.\n");
    }

    return 0;
}