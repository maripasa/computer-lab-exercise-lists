// 14. Escreva um programa que leia uma temperatura em graus Celsius e apresente convertida em graus Fahrenheit.

#include <stdio.h>

int main() {

    float celsius;
    float fahr;

    // Solicita uma temperatura em Celsius ao usuário
    printf("Digite uma temperatura em Celsius (C): ");
    scanf("%f", &celsius);
    
    // Calcula a temperatura e imprime
    fahr = (9 * celsius + 160) / 5;
    printf("A temperatura em Fahrenheit: %f", fahr);

    return 0;

}