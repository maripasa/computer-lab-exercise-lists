#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int vetor[3];
    double media_aritmetica = 0.0;
    double media_geometrica = 1.0;

    srand(time(NULL));

    for (int i = 0; i < 3; i++) {
        vetor[i] = rand() % 20;
        media_aritmetica += vetor[i];
        media_geometrica *= vetor[i];
    }

    media_aritmetica /= 3;

    media_geometrica = pow(media_geometrica, 1.0/3);

    // Exiba os resultados
    printf("Vetor gerado: [%d, %d, %d]\n", vetor[0], vetor[1], vetor[2]);
    printf("Média Aritmética: %.2lf\n", media_aritmetica);
    printf("Média Geométrica: %.2lf\n", media_geometrica);

    return 0;
}