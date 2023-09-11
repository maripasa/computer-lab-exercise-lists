// Questão 28

#include <stdio.h>

unsigned char hideBits(unsigned char x, unsigned char y) {
    unsigned char mask = 0xF0; // Máscara para esconder os 4 bits mais significativos
    unsigned char result = x & mask; // Mantém os 4 bits mais significativos de X
    result |= (y >> 4); // Move os 4 bits menos significativos de Y para a direita e os insere em result

    return result;
}

int main() {
    unsigned char x, y;

    printf("Digite dois valores numéricos (X e Y) como números inteiros (0-255):\n");
    scanf("%hhu %hhu", &x, &y);

    unsigned char resultado = hideBits(x, y);

    printf("Resultado: %u\n", resultado);

    return 0;
}