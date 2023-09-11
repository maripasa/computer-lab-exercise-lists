// Questão 7

#include <stdio.h>

int main() {
    float x, y;

    while (1) {
        printf("\nInsira dois valores (x y): \n");
        scanf("%f %f", &x, &y);

        if (y == 0) {
            puts("Valor indefinido, divisão por zero.\n");
            continue; // Repete a leitura de valores
        }

        printf("%f / %f = %f\n", x, y, (x / y));
    }

    return 0;
}