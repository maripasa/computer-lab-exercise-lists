#include <stdio.h>

// Definição da Estrutura Aluno
struct Aluno {
    float nota1;
    float nota2;
    float media;
};

int main() {
    // Declaração de uma variável do tipo Aluno
    struct Aluno aluno;

    // Solicita ao usuário que insira as notas
    printf("Digite a nota 1: ");
    scanf("%f", &aluno.nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &aluno.nota2);

    // Calcula a média
    aluno.media = (aluno.nota1 + aluno.nota2) / 2.0;

    // Exibe os resultados
    printf("\nNotas do Aluno:\n");
    printf("Nota 1: %.2f\n", aluno.nota1);
    printf("Nota 2: %.2f\n", aluno.nota2);
    printf("Média: %.2f\n", aluno.media);

    return 0;
}
