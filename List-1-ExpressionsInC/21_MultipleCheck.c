// 21. Escreva um programa que leia dois inteiros e determine se o primeiro é múltiplo do segundo.

#include <stdio.h>

int main() {
    
    int a;
    int b;

    // Solicita dois numeros inteiros 'a' e 'b' ao usuario
    printf("Digite um numero inteiro 'a': ");
    scanf("%d", &a);

    printf("\nDigite um numero inteiro 'b': ");
    scanf("%d", &b);

    // Verifica se 'a' e multiplo de 'b' e imprime a mensagem correspondente
    (a % b) ? printf("\n\"'A' nao multiplo de 'B'.\"") : printf("\n\"'A' multiplo de 'B'.\"");

    return 0;

}