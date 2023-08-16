// 27. Escreva um programa que solicite 3 números em ponto flutuante e imprima a média aritmética e geométrica.

#include <stdio.h>
#include <math.h>

int main() {
    
    float num1, num2, num3;

    // Solicita ao usuário 3 valores float
    printf("Digite 3 valores float: ");
    scanf(" %f %f %f", &num1, &num2, &num3);

    // Calcula a média aritmética e geométrica dos valores
    float mediaAri = (num1 + num2 + num3) / 3;
    float mediaGeo = pow((num1 * num2 * num3), 1.0 / 3);

    // Imprime a média aritmética e geométrica
    printf("\nA media aritmetica: %f", mediaAri);
    printf("\nA media geometrica: %f\n", mediaGeo);

    return 0;

}