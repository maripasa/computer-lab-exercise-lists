// Questão 22

#include <stdio.h>

int contarDigitos7(int numero);

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    int contagem = contarDigitos7(numero);

    printf("O número %d contém %d dígitos 7.\n", numero, contagem);

    return 0;
}

int contarDigitos7(int numero) {
    int contagem = 0;

    while (numero != 0) {
        int digito = numero % 10; // Obtém o último dígito do número

        if (digito == 7) {
            contagem++;
        }

        numero = numero / 10; // Remove o último dígito do número
    }

    return contagem;
}