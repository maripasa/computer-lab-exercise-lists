// Questão 8

#include <stdio.h>

#define ENTRADA_MAIOR 1
#define ENTRADA_IGUAL_PRESTACOES 2

int calcularEntradaEPrestacoes(float valorMercadoria, float *entrada, float *prestacao) {
    // Verifica se o valor da mercadoria é válido (maior que zero)
    if (valorMercadoria <= 0) {
        return 0; // Valor inválido
    }

    // Calcula o valor da entrada
    *entrada = valorMercadoria / 3;

    // Arredonda o valor da entrada para a próxima inteira
    if (*entrada < (int)(*entrada) + 0.5) {
        *entrada = (int)(*entrada);
    } else {
        *entrada = (int)(*entrada) + 1;
    }

    // Calcula o valor das duas prestações
    *prestacao = (valorMercadoria - *entrada) / 2;

    return 1; // Valor válido
}

int main() {
    float valorMercadoria, entrada, prestacao;

    printf("Digite o valor da mercadoria: R$ ");
    scanf("%f", &valorMercadoria);

    int resultado = calcularEntradaEPrestacoes(valorMercadoria, &entrada, &prestacao);

    if (resultado) {
        printf("\nValor da entrada: R$ %.2f\n", entrada);
        printf("Valor das duas prestações: R$ %.2f\n", prestacao);
    } else {
        printf("\nValor da mercadoria inválido. Certifique-se de que o valor seja maior que zero.\n");
    }

    return 0;
}