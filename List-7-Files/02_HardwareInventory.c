#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura para armazenar informações sobre a ferramenta
struct Ferramenta {
    char nome[50];
    int quantidade;
    float custo;
};

// Função para inicializar o arquivo com 100 registros vazios
void inicializarArquivo() {
    FILE *arquivo;
    struct Ferramenta ferramentaVazia = {"", 0, 0.0};

    // Abre o arquivo para escrita, ou cria se não existir
    arquivo = fopen("hardware.dat", "wb");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    // Escreve 100 registros vazios no arquivo
    for (int i = 0; i < 100; i++) {
        fwrite(&ferramentaVazia, sizeof(struct Ferramenta), 1, arquivo);
    }

    // Fecha o arquivo
    fclose(arquivo);
}

// Função para listar todas as ferramentas no arquivo
void listarFerramentas() {
    FILE *arquivo;
    struct Ferramenta ferramenta;
    int registro = 0;

    // Abre o arquivo para leitura
    arquivo = fopen("hardware.dat", "rb");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    // Lê e exibe todas as ferramentas no arquivo
    while (fread(&ferramenta, sizeof(struct Ferramenta), 1, arquivo) == 1) {
        if (ferramenta.nome[0] != '\0') {  // Verifica se o registro não está vazio
            printf("Registro: %d\n", registro);
            printf("Nome: %s\n", ferramenta.nome);
            printf("Quantidade: %d\n", ferramenta.quantidade);
            printf("Custo: %.2f\n", ferramenta.custo);
            printf("\n");
        }
        registro++;
    }

    // Fecha o arquivo
    fclose(arquivo);
}

// Função para inserir uma nova ferramenta no arquivo
void inserirFerramenta() {
    FILE *arquivo;
    struct Ferramenta ferramenta;

    // Abre o arquivo para leitura e escrita
    arquivo = fopen("hardware.dat", "ab");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    // Solicita ao usuário que insira os dados da ferramenta
    printf("Digite o nome da ferramenta: ");
    scanf("%s", ferramenta.nome);

    printf("Digite a quantidade: ");
    scanf("%d", &ferramenta.quantidade);

    printf("Digite o custo: ");
    scanf("%f", &ferramenta.custo);

    // Encontra o primeiro registro vazio no arquivo
    int registro = 0;
    while (fread(&ferramenta, sizeof(struct Ferramenta), 1, arquivo) == 1) {
        if (ferramenta.nome[0] == '\0') {  // Verifica se o registro está vazio
            fseek(arquivo, registro * sizeof(struct Ferramenta), SEEK_SET);
            fwrite(&ferramenta, sizeof(struct Ferramenta), 1, arquivo);
            break;
        }
        registro++;
    }

    // Fecha o arquivo
    fclose(arquivo);
}

// Função para excluir uma ferramenta do arquivo
void excluirFerramenta(int registro) {
    FILE *arquivo;
    struct Ferramenta ferramentaVazia = {"", 0, 0.0};

    // Abre o arquivo para leitura e escrita
    arquivo = fopen("hardware.dat", "r+b");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    // Move para o registro especificado
    fseek(arquivo, registro * sizeof(struct Ferramenta), SEEK_SET);

    // Escreve uma ferramenta vazia no registro
    fwrite(&ferramentaVazia, sizeof(struct Ferramenta), 1, arquivo);

    // Fecha o arquivo
    fclose(arquivo);
}

// Função para atualizar informações de uma ferramenta no arquivo
void atualizarFerramenta(int registro) {
    FILE *arquivo;
    struct Ferramenta ferramenta;

    // Abre o arquivo para leitura e escrita
    arquivo = fopen("hardware.dat", "r+b");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    // Move para o registro especificado
    fseek(arquivo, registro * sizeof(struct Ferramenta), SEEK_SET);

    // Solicita ao usuário que insira as novas informações da ferramenta
    printf("Digite o novo nome da ferramenta: ");
    scanf("%s", ferramenta.nome);

    printf("Digite a nova quantidade: ");
    scanf("%d", &ferramenta.quantidade);

    printf("Digite o novo custo: ");
    scanf("%f", &ferramenta.custo);

    // Escreve as novas informações no registro
    fwrite(&ferramenta, sizeof(struct Ferramenta), 1, arquivo);

    // Fecha o arquivo
    fclose(arquivo);
}

int main() {
    // Inicializa o arquivo com 100 registros vazios
    inicializarArquivo();

    int opcao, registro;

    do {
        // Menu de opções
        printf("\n1 - Listar ferramentas\n");
        printf("2 - Inserir nova ferramenta\n");
        printf("3 - Excluir ferramenta\n");
        printf("4 - Atualizar informações da ferramenta\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                // Listar ferramentas
                listarFerramentas();
                break;
            case 2:
                // Inserir nova ferramenta
                inserirFerramenta();
                break;
            case 3:
                // Excluir ferramenta
                printf("Digite o número do registro a ser excluído: ");
                scanf("%d", &registro);
                excluirFerramenta(registro);
                break;
            case 4:
                // Atualizar informações da ferramenta
                printf("Digite o número do registro a ser atualizado: ");
                scanf("%d", &registro);
                atualizarFerramenta(registro);
                break;
            case 0:
                // Sair do programa
                break;
            default:
                // Opção inválida
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
