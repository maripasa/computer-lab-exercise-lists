// Questão 16

#include <stdio.h>

#define START_LIMIT 0
#define CENTER_LIMIT 100
#define END_LIMIT 200
#define FIRST_DIV 3
#define SECOND_DIV 5

int main() {
    int hold;
    int sumFirst = 0;
    int sumSecond = 0;

    puts("\n== 0 até 100: Divisíveis por 3 ==");
    puts("== 100 até 200: Divisíveis por 5 ==\n");

    for (hold = START_LIMIT; hold <= END_LIMIT; hold++) {
        if (hold <= CENTER_LIMIT) {
            if (!(hold % FIRST_DIV))
                sumFirst++;
        }

        if (hold > CENTER_LIMIT) {
            if (!(hold % SECOND_DIV))
                sumSecond++;
        }
    }

    printf("0 a 100, divisíveis por 3: %d\n", sumFirst);
    printf("100 a 200, divisíveis por 5: %d\n", sumSecond);

    puts("\nFim\n");
    return 0;
}