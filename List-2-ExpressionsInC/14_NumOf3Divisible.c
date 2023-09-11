// Questão 14

#include <stdio.h>

#define RESET_COUNT 0

int main() {
    int inputA, inputB, hold;
    int count;

    puts("\n== Quantidade de Divisíveis por 3 ==\n");

    printf("\nInsira o alcance (a b): ");
    scanf("%d %d", &inputA, &inputB);

    if (inputA < inputB) {
        count = RESET_COUNT;
        for (hold = inputA; hold <= inputB; hold++) {
            if (hold % 3 == 0) {
                count++;
            }
        }
    } else {
        count = RESET_COUNT;
        for (hold = inputA; hold >= inputB; hold--) {
            if (hold % 3 == 0) {
                count++;
            }
        }
    }

    printf("\nA quantidade de números divisíveis por 3 no intervalo é: %d\n", count);

    return 0;
}