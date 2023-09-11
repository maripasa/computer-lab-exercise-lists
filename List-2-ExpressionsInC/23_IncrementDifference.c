// Questão 23

#include <stdio.h>

int main() {
    int x = 5;
    int y;

    y = ++x; // Pré-incremento: primeiro incrementa, depois atribui
    printf("Pré-incremento: x = %d, y = %d\n", x, y);

    x = 5; // Resetando x
    y = x++; // Pós-incremento: primeiro atribui, depois incrementa
    printf("Pós-incremento: x = %d, y = %d\n", x, y);

    return 0;
}