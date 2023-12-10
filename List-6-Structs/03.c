#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Estrutura para armazenar informações sobre o vetor
struct VetorInfo {
    int *vetor;         // Ponteiro para o vetor de números aleatórios
    int quantidade;     // Quantidade de elementos no vetor
    float media;        // Média dos elementos no vetor
};

// Função para gerar vetor de números aleatórios e calcular média
void gerarVetor(struct VetorInfo *info) {
    // Aloca memória para o vetor
    info->vetor = (int *)malloc(info->quantidade * sizeof(int));

    // Gera números aleatórios e preenche o vetor
    srand(time(NULL));
    int soma = 0;
    for (int i = 0; i < info->quantidade; i++) {
        info->vetor[i] = rand() % 100; // Números aleatórios de 0 a 99
        soma += info->vetor[i];
    }

    // Calcula a média
    info->media = (float)soma / info->quantidade;
}

int main() {
    struct VetorInfo info;

    // Define a quantidade de elementos no vetor
    printf("Digite a quantidade de elementos no vetor: ");
    scanf("%d", &info.quantidade);

    // Gera o vetor e calcula a média
    gerarVetor(&info);

    // Exibe o vetor gerado e a média
    printf("Vetor gerado: ");
    for (int i = 0; i < info.quantidade; i++) {
        printf("%d ", info.vetor[i]);
    }
    printf("\nMédia: %.2f\n", info.media);

    // Libera a memória alocada para o vetor
    free(info.vetor);

    return 0;
}
