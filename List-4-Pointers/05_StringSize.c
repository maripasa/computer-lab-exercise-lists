#include <stdio.h>

int main() {
    char str[100];
    char *ptr;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    ptr = str;

    int tamanho = 0;

    while (*ptr != '\0') {
        tamanho++;
        ptr++;
    }

    printf("O tamanho da string é: %d\n", tamanho);

    return 0;
}
