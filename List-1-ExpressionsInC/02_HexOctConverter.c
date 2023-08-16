// 2. Faça um programa que leia um valor inteiro decimal X e escreva, na tela, este mesmo valor nas bases hexadecimal e octal.

#include <stdio.h>

int main() {

    int input;

    // Solicitar um numero inteiro ao usuario
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &input);

    // Imprimir o numero em base octal e hexadecimal
    printf("\nEm base octal: %o", input);
    printf("\nEm base hexadecimal: %X", input);

    return 0;

}