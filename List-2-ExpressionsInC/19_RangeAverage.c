// Questão 19

#include <stdio.h>

#define RESET_SUM 0

int main() {
    int inputA, inputB, hold;
    int qntNum, sumNum;

    // Mensagem de boas-vindas
    puts("\n== Média do Alcance ==\n");

    while (1) {
        qntNum = RESET_SUM;
        sumNum = RESET_SUM;

        // Solicita ao usuário que insira o alcance
        printf("\n\nInsira o alcance (a b): ");
        scanf("%d %d", &inputA, &inputB);

        // Verifica se o início do alcance é menor que o final
        if (inputA < inputB) {
            for (hold = inputA; hold <= inputB; hold++) {
                qntNum += 1; // Incrementa a quantidade de números no alcance
                sumNum += hold; // Soma os números no alcance
            }
        } else {
            for (hold = inputA; hold >= inputB; hold--) {
                qntNum += 1; // Incrementa a quantidade de números no alcance
                sumNum += hold; // Soma os números no alcance
            }
        }

        // Calcula a média e a exibe
        printf("\nA média do alcance é %.2f", ((float)sumNum / qntNum));
    }

    return 0;
}