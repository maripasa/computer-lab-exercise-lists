// 3. Faça um programa capaz de ler um valor real e escrevê-lo com apenas uma casa decimal.

#include <stdio.h>

int main() {

    float input;

    // Solicita um numero ao usuario
    printf("Digite um numero: ");
    scanf("%f", &input);

    // Imprime o numero com uma casa decimal de precisao
    printf("Numero com uma casa decimal de precisao: %.1f\n", input);

    return 0;
	
}