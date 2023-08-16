// 20. Escreva um programa que receba um número inteiro e determine se ele é par ou ímpar.

#include <stdio.h>

int main() {
    
    int input;

    // Solicita um numero inteiro ao usuario
    printf("Digite um numero inteiro: ");
    scanf("%d", &input);

    // Verifica se o numero e impar ou par e imprime a mensagem correspondente
    (input % 2) ? printf("\n\"Valor impar.\"") : printf("\n\"Valor par.\"");

    return 0;

}