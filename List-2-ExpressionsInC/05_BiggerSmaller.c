// Questão 5

#include <stdio.h>

int main() {

    int input;
    int bigger = 0;
    int smaller = 0;
    int firstInput = 1; // Variável para indicar o primeiro input

    while (1) {

        printf("\nDigite um número inteiro (digite 0 para sair): ");
        scanf("%d", &input);

        // Verifica se o usuário digitou zero para sair
        if (input == 0) {
            printf("Saindo do programa...\n");
            break;
        }

        if (firstInput) {
            // Se for o primeiro input, defina maior e menor para o valor do input
            bigger = input;
            smaller = input;
            firstInput = 0; // Marca que não é mais o primeiro input
        } else {
            // Verifica e atualiza o maior e o menor
            if (input > bigger) {
                bigger = input;
            }
            if (input < smaller) {
                smaller = input;
            }
        }

        // Exibe se o número é par ou ímpar
        (input % 2) ? printf("Número: %d, ímpar\n", input) : printf("Número: %d, par\n", input);
    }

    printf("Maior valor: %d\nMenor valor: %d\n", bigger, smaller);

    return 0;
}