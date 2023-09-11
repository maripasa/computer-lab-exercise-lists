// Questão 13

#include <stdio.h>

#define RESET_SUM 0

int main() {
    int inputA, inputB, hold;
    int sum;

    puts("\n== Somatório dos Pares ==\n");

    printf("\nInsira o alcance (a b): ");
    scanf("%d %d", &inputA, &inputB);

    if (inputA < inputB) {
        for (hold = inputA; hold <= inputB; hold++) {
            if (!(hold % 2)) {
                sum += hold;
            }
        }
    } else {
        for (hold = inputA; hold >= inputB; hold--) {
            if (!(hold % 2)) {
                sum += hold;
            }
        }
    }

    printf("\nO somatório dos números pares no alcance indicado é: %d\n", sum);

    return 0;
}