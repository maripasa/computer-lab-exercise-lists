// Questão 17

#include <stdio.h>

#define TABLE_START 0
#define TABLE_END 100
#define TABLE_INTERVAL 10

int main() {
    puts("\n== Tabela Celsius-Fahrenheit de 10 em 10 ==");

    for (int x = TABLE_START; x <= TABLE_END; x += TABLE_INTERVAL) {
        printf("\n%dC = %dF", x, ((x * 9 / 5) + 32));
    }

    puts("\n\nFim\n");
    return 0;
}