// 24. Escreva um programa que calcule o produto entre um valor dado x por 2 elevado a um valor dado n.

#include <stdio.h>

int calculate(int x, int n) {

    // Calcula o produto de x por 2 elevado a n
    return (x << n) << 1;

}

int main() {

    int x, n;
    
    printf("Digite um numero x: ");
    scanf("%d", &x);

    printf("Digite um numero n: ");
    scanf("%d", &n);

    // Chama a função para calcular o produto e exibe o resultado
    int resultado = calculate(x, n);
    printf("O produto de %d por 2 elevado a %d é: %d\n", x, n, resultado);
    
    return 0;

}