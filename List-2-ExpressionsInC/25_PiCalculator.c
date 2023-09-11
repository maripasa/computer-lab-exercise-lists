// Questão 25

#include <stdio.h>

int main() {
    int n = 100000; // Número de termos na série
    double pi = 0.0;

    for (int i = 0; i < n; i++) {
        double termo = 4.0 / (2 * i + 1);
        if (i % 2 == 0) {
            pi += termo;
        } else {
            pi -= termo;
        }
    }

    printf("O valor estimado de π é: %.10lf\n", pi);

    return 0;
}