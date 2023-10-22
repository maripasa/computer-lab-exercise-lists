#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função que busca um caractere em uma string e retorna um ponteiro para a primeira ocorrência
const char* buscarCaractere(const char* str, char ch) {
    while (*str != '\0') {
        if (*str == ch) {
            return str; // Retorna o ponteiro para a primeira ocorrência do caractere
        }
        str++;
    }
    return NULL; // Retorna NULL se o caractere não for encontrado na string
}

int main() {
    char *minhaString = NULL;
    char caractereProcurado;

    printf("Digite uma string: ");
    size_t tamanho = 100; // Tamanho inicial do buffer
    minhaString = malloc(tamanho * sizeof(char));

    if (minhaString == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    if (fgets(minhaString, tamanho, stdin) != NULL) {
        minhaString[strcspn(minhaString, "\n")] = '\0'; // Remove o caractere de nova linha

        printf("Digite o caractere a ser procurado: ");
        scanf(" %c", &caractereProcurado);

        const char* resultado = buscarCaractere(minhaString, caractereProcurado);

        if (resultado != NULL) {
            printf("Caractere '%c' encontrado na posição %ld.\n", caractereProcurado, resultado - minhaString);
        } else {
            printf("Caractere '%c' não encontrado na string.\n", caractereProcurado);
        }
    } else {
        printf("Erro ao ler a entrada.\n");
    }

    free(minhaString); // Libera a memória alocada
    return 0;
}