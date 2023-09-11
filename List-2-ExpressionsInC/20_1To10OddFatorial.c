// Questão 20

#include <stdio.h>

#define RANGE_START 1
#define RANGE_END 10

// Função para calcular o fatorial de um número
int calcularFatorial(int n) {
    int fatorial = 1;
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int input;

    puts("\n== Fatorial dos números ímpares de 1 à 10 ==\n");

    for (int x = RANGE_START; x <= RANGE_END; x++) {
        if (x % 2 == 1) { // Verifica se o número é ímpar
            int fatorial = calcularFatorial(x); // Chama a função para calcular o fatorial
            // Exibe o resultado
            printf("Fatorial de %d: %d\n", x, fatorial);
        }
    }

    puts("\nFim\n");
    return 0;
}