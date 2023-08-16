// 4. Sabendo que os argumentos da função "printf" podem ser expressões,
// faça um programa capaz de ler um valor inteiro X e escrever seu triplo,
// seu quadrado e seu meio

#include <stdio.h>

int main() {

    int input;
    
    // Solicita um número ao usuário
    printf("Digite um numero:");
    scanf("%d", &input);
    
    // Calcula e imprime o triplo, quadrado e metade do número
    printf("\nTriplo deste numero: %d", (input * 3));
    printf("\nQuadrado deste numero: %d", (input * input));
    printf("\nMetade deste numero: %.2f", (float)input / 2);  // Correção feita aqui
    
    return 0;
}