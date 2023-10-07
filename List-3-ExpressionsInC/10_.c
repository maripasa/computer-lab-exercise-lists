#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int matriz[3][3];
    int x;
    int contador = 0;

    srand(time(NULL));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 10;
        }
    }

    printf("Digite um valor inteiro x: ");
    scanf("%d", &x);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == x) {
                contador++;
            }
        }
    }

    printf("O valor %d aparece %d vezes na matriz.\n", x, contador);

    return 0;

}
