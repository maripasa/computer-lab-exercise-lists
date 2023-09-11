// Questão 9

#include <stdio.h>

int main() {
    int n = 20; // Defina o número desejado de termos da sequência de Fibonacci
    int termo1 = 1;
    int termo2 = 1;

    printf("Série de Fibonacci até o vigésimo termo:\n");
    printf("%d, %d, ", termo1, termo2);

    for (int i = 3; i <= n; i++) {
        int proximo_termo = termo1 + termo2;
        printf("%d, ", proximo_termo);

        termo1 = termo2;
        termo2 = proximo_termo;
    }

    printf("\n");

    return 0;
}