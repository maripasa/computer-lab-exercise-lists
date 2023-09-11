// Questão 27

#include <stdio.h>

int main() {
    int numero, maior, menor;

    printf("Digite uma sequência de números inteiros (0 para encerrar):\n");
    scanf("%d", &numero);

    maior = menor = numero;

    while (numero != 0) {
        if (numero > maior) {
            maior = numero;
        } else if (numero < menor) {
            menor = numero;
        }
        scanf("%d", &numero);
    }

    printf("Produto do maior e menor número: %d\n", maior * menor);

    return 0;
}