// 13. Escreva um programa que leia duas variáveis A e B e efetue a troca dos valores.

#include <stdio.h>

int main() {

    int a;
    int b;
    int c;

    // Solicita dois valores 'a' e 'b' ao usuário
    printf("Digite um valor 'a' e 'b': ");
    scanf(" %d %d", &a, &b);
    
    // Troca os valores de 'a' e 'b' usando uma variável auxiliar 'c'
    c = a;
    a = b;
    b = c;
    
    // Imprime os novos valores de 'a' e 'b'
    printf("\nO valor de a: %d \nO valor de b: %d", a, b);

    return 0;

}