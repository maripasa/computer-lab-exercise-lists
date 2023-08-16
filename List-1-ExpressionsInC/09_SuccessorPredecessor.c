// 9. Escreva um programa que leia um valor numérico inteiro e apresente como resultado seus valores sucessor e antecessor.

#include <stdio.h>

int main() {

    int input;

    // Solicita um número inteiro ao usuário
    printf("Digite um inteiro: ");
    scanf("%d", &input);
    
    // Calcula e imprime o antecessor e sucessor do número
    printf("\nO antecessor de %d: %d", input, (input - 1));
    printf("\nO sucessor de %d: %d", input, (input + 1));

    return 0;

}