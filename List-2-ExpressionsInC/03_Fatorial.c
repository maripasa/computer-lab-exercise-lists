// Questão 3

#include <stdio.h>

int main() {

    unsigned input;
    unsigned fatorial = 1;
    unsigned i;

    // Solicita ao usuário que insira um número positivo
    printf("\nInsira um número positivo: ");
    scanf("%u", &input);

    for (i = input; i > 0; i--) {
        // Calcula o fatorial do número
        fatorial = i * fatorial;
    }

    // Exibe o resultado do fatorial
    printf("O fatorial de %u : %u\n\n", input, fatorial);

    return 0;
}