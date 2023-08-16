// 8. Escreva um programa que receba um valor inteiro e apresente o resultado do valor lido elevado ao quadrado.

#include <stdio.h>

int main() {

    int input;

    // Solicita um número inteiro ao usuário
    printf("Digite um numero inteiro: ");
    scanf("%d", &input);
    
    // Calcula e imprime o valor ao quadrado do número
    printf("\nO valor ao quadrado: %d", (input * input));

    return 0;

}