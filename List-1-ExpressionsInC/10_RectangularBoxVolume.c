// 10. Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a fórmula VOLUME = COMPRIMENTO * LARGURA * ALTURA.

#include <stdio.h>

int main() {

    float comp;
    float larg;
    float altu;

    // Solicita o comprimento, largura e altura do volume ao usuário
    printf("Digite o comprimento, a largura e a altura do volume a medir (C L A): ");
    scanf(" %f %f %f", &comp, &larg, &altu);
    
    // Calcula e imprime o volume calculado
    printf("\nO volume calculado: %f", (comp * larg * altu));

    return 0;

}