#include <stdio.h>

// Estrutura para armazenar informações sobre um aluno
struct Aluno {
    char nome[50];
    float nota;
};

// Função para calcular a média dos alunos
float calcularMedia(struct Aluno alunos[], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += alunos[i].nota;
    }
    return soma / tamanho;
}

int main() {
    // Array de alunos
    struct Aluno alunos[3];

    // Preenche informações dos alunos
    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota);
    }

    // Calcula e exibe a média dos alunos
    float media = calcularMedia(alunos, 3);
    printf("Média dos alunos: %.2f\n", media);

    return 0;
}
