// 18. Escreva um programa que leia o raio de um círculo e imprima seu diâmetro, o valor de sua circunferência e sua área.

#include <stdio.h>

int main() {

    float raio;
    float pi = 3.14159;

    // Solicita o raio da circunferencia ao usuario
    printf("Digite o raio da circuferencia: ");
    scanf("%f", &raio);

    // Calcula e imprime o diametro, circunferencia e area da circunferencia
    printf("\n\nDiametro: %.6f", (raio * 2));
    printf("\n\nCircunferencia: %.6f", (2 * pi * raio));
    printf("\n\nArea: %.6f", (pi * raio * raio));

    return 0; 

}