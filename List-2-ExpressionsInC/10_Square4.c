// Questão 10

#include <stdio.h>

int main() {
    int x;

    puts("\n== QUADRADO DOS MÚLTIPLOS DE 4 (15 a 90) ==\n");

    for (x = 15; x <= 90; x++) {
        if (x % 4 == 0) {
            // Calcula e exibe o quadrado dos múltiplos de 4
            printf("Quadrado de %d = %d\n", x, (x * x));
        }
    }

    return 0;
}