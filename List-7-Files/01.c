#include <stdio.h>

struct Usuario {
    char nome[50];
    int idade;
    char cidade[50];
};

int main() {
    FILE *arquivo;
    struct Usuario usuario;

    arquivo = fopen("usuarios.csv", "w");

    if (arquivo == NULL) { 
        printf("Erro ao abrir o arquivo.\n");
        return 1; 
    }

    fprint(arquivo, "Nome, Idade, Cidade\n");

    char continuar;
    do {
        printf("Digite o nome: ");
        fgets(usuario.nome, sizeof(usuario.nome), stdin);
        usuario.nome[strcspn(usuario.nome, "\n")] = '\0';  // Remove the newline character

        printf("Digite a idade: ");
        scanf("%d", &usuario.idade);

        // Clear the input buffer after scanf to prevent issues with the next fgets
        while (getchar() != '\n');

        printf("Digite a cidade: ");
        fgets(usuario.cidade, sizeof(usuario.cidade), stdin);
        usuario.cidade[strcspn(usuario.cidade, "\n")] = '\0';  // Remove the newline character

        fprintf(arquivo, "%s,%d,%s\n", usuario.nome, usuario.idade, usuario.cidade);

        printf("Deseja adicionar mais usuários? (S/N): ");
        scanf(" %c", &continuar);

        // Clear the input buffer after scanf to prevent issues with the next fgets
        while (getchar() != '\n');
    } while (continuar == 'S' || continuar == 's');

    fclose(arquivo);

    printf("Dados gravados no arquivo usuarios.csv.\n");

    return 0;
}