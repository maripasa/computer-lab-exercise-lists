// Questão 24

#include <stdio.h>

int main() {
    int limite = 500;
    
    for (int a = 1; a <= limite; a++) {
        for (int b = a; b <= limite; b++) {
            for (int c = b; c <= limite; c++) {
                if (a * a + b * b == c * c) {
                    printf("Tripla de Pitágoras: %d, %d, %d\n", a, b, c);
                }
            }
        }
    }
    
    return 0;
}