#include <stdio.h>

// Estrutura para armazenar informações sobre um professor
struct Professor {
    char nome[50];
    int idade;
    // Outras informações sobre o professor podem ser adicionadas aqui
};

// Estrutura para armazenar informações sobre uma disciplina
struct Disciplina {
    char nome[50];
    int codigo;
    struct Professor responsavel; // Campo que corresponde a uma estrutura professor
    // Outras informações sobre a disciplina podem ser adicionadas aqui
};

int main() {
    // Exemplo de uso da estrutura Disciplina
    struct Disciplina disciplina;

    // Preenche informações sobre o professor responsável
    printf("Digite o nome do professor responsável: ");
    scanf("%s", disciplina.responsavel.nome);
    printf("Digite a idade do professor responsável: ");
    scanf("%d", &disciplina.responsavel.idade);

    // Preenche outras informações sobre a disciplina
    printf("Digite o nome da disciplina: ");
    scanf("%s", disciplina.nome);
    printf("Digite o código da disciplina: ");
    scanf("%d", &disciplina.codigo);

    // Exibe as informações da disciplina e do professor responsável
    printf("\nInformações da Disciplina:\n");
    printf("Nome: %s\n", disciplina.nome);
    printf("Código: %d\n", disciplina.codigo);

    printf("\nInformações do Professor Responsável:\n");
    printf("Nome: %s\n", disciplina.responsavel.nome);
    printf("Idade: %d\n", disciplina.responsavel.idade);

    return 0;
}
