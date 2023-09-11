// Questão 21

#include <stdio.h>

#define NUM_DIGITOS 5

int isPalindromo(int numero);

int main() {
    int numero;

    printf("Digite um número de %d dígitos: ", NUM_DIGITOS);
    scanf("%d", &numero);

    if (isPalindromo(numero)) {
        printf("%d é um palíndromo!\n", numero);
    } else {
        printf("%d não é um palíndromo.\n", numero);
    }

    return 0;
}

int isPalindromo(int numero) {
    int original = numero;
    int inverso = 0;
    int digito;

    for (int i = 0; i < NUM_DIGITOS; i++) {
        digito = numero % 10;   // Obtém o último dígito do número
        inverso = inverso * 10 + digito; // Constrói o número inverso
        numero = numero / 10;   // Remove o último dígito do número
    }

    return original == inverso;
}
