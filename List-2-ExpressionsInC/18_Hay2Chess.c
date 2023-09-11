// Questão 18

#include <stdio.h>

// Definições das constantes
#define BOARD_SIZE 64
#define GROWTH_RATE 2

int main() {
    // Variáveis para rastrear o crescimento atual e a contagem total de grãos
    unsigned long long currentGrowth = 1;
    unsigned long long grainCount = 0;

    // Mensagem de boas-vindas
    puts("\n== Quantos grãos cabem no tabuleiro? ==\n");

    // Loop para calcular o número total de grãos
    for (int x = 1; x <= BOARD_SIZE; x++) {
        grainCount += currentGrowth;
        currentGrowth *= GROWTH_RATE;
    }

    // Exibir o resultado
    printf("O total de grãos será de %llu grãos.\n", grainCount);

    // Mensagem de fim
    puts("\nFim\n");
    return 0;
}

