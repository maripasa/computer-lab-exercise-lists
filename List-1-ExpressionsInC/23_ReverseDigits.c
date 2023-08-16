// 23. Escreva um programa que receba um número de três dígitos, separe o número em seus dígitos componentes
// e reconstrua um número com os componentes na ordem inversa.

#include <stdio.h>

int main() {
    
    int input, digito1, digito2, digito3;

    // Solicita um numero inteiro de 3 digitos ao usuario
    printf("Digite um numero inteiro de 3 digitos: ");
    scanf("%d", &input);

    // Divide o numero em seus digitos
    digito1 = input / 100;
    digito2 = (input / 10) % 10;
    digito3 = input % 10;

    // Calcula e imprime o numero em ordem inversa
    int inverso = digito3 * 100 + digito2 * 10 + digito1;
    printf("Numero em ordem inversa: %d", inverso);

    return 0;

}