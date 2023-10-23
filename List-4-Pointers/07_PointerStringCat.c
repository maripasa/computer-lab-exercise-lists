#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concatenarStrings(char **destino, const char *str1, const char *str2) {
    size_t tamanho1 = strlen(str1);
    size_t tamanho2 = strlen(str2);

    *destino = (char *)malloc(tamanho1 + tamanho2 + 1);

    if (*destino != NULL) {
        for (size_t i = 0; i < tamanho1; i++) {
            (*destino)[i] = str1[i];
        }

        for (size_t i = 0; i < tamanho2; i++) {
            (*destino)[tamanho1 + i] = str2[i];
        }

        (*destino)[tamanho1 + tamanho2] = '\0'; // Adiciona o caractere nulo no final
    }
}

int main() {
    char string1[] = "Hello, ";
    char string2[] = "World!";
    char *stringConcatenada = NULL;

    concatenarStrings(&stringConcatenada, string1, string2);

    if (stringConcatenada != NULL) {
        printf("Strings concatenadas: %s\n", stringConcatenada);
        free(stringConcatenada);
    } else {
        printf("Falha na alocação de memória.\n");
    }

    return 0;
}