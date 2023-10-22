#include <stdio.h>

int main() {
    int intArray[5];
    float floatArray[5];
    char charArray[5];
    
    printf("Digite 5 números inteiros separados por espaços:\n");
    fgets(intArray, sizeof(intArray), stdin);

    printf("\nValores e Endereços do Vetor de Inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor: %d, Endereço: %p\n", intArray[i], &intArray[i]);
    }

    printf("\nDigite 5 números de ponto flutuante separados por espaços:\n");
    fgets(floatArray, sizeof(floatArray), stdin);

    printf("\nValores e Endereços do Vetor de Ponto Flutuante:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor: %f, Endereço: %p\n", floatArray[i], &floatArray[i]);
    }

    printf("\nDigite 5 caracteres separados por espaços:\n");
    fgets(charArray, sizeof(charArray), stdin);

    printf("\nValores e Endereços do Vetor de Caracteres:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor: %c, Endereço: %p\n", charArray[i], (void*)&charArray[i]);
    }

    return 0;
}