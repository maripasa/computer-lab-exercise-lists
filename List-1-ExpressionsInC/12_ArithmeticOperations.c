// 12. Escreva um programa que peça ao usuário para digitar dois números,
// obtenha-os do usuário e imprima a soma, o produto, a diferença, o quociente e o resto da divisão dos dois números.

#include <stdio.h>

int main() {

    int a;
    int b;

    // Solicita dois valores inteiros 'a' e 'b' ao usuário
    printf("Digite 2 valores inteiros, 'a' e 'b' (a b): ");
    scanf(" %d %d", &a, &b);
    
    // Calcula e imprime a soma, o produto, a diferença, o quociente e o resto
    printf("\nSoma: %d \nProduto: %d \nDiferenca: %d \nQuociente: %d \nResto: %d", (a + b), (a * b), (a - b), (a / b), (a % b));

    return 0;

}