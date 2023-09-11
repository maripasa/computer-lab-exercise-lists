// Questão 26

#include <stdio.h>

int main() {
    printf("Decimal\tBinário\tOctal\tHexadecimal\n");
    for (int i = 1; i <= 256; i++) {
        printf("%d\t%08d\t%03o\t%02X\n", i, i, i, i);
    }

    return 0;
}