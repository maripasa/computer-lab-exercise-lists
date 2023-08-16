// 17. Escrever um programa que receba um valor inteiro do usuário e apresente o seu valor absoluto (módulo).

#include <stdio.h>
#include <math.h>

int main() {
    int input;

    // Solicita um número inteiro ao usuário
    printf("Digite um inteiro: ");
    scanf("%d", &input);

    // Calcula o quadrado do número e depois a raiz quadrada, obtendo o módulo
    input = input * input;
    input = sqrt(input);

    // Imprime o resultado
    printf("O modulo: %d", input);

    return 0;
}