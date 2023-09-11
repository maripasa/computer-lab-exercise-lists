// Questão 4

#include <stdio.h>

int main() {
    // Altura inicial de José e Pedro
    int jose = 150;
    int pedro = 110;
    int ano = 0; // Contador de anos

    // Apresentação do problema
    puts("1. José tem 150 centímetros, e cresce 2 ao ano,");
    puts("2. Pedro tem 110, mas cresce 3 ao ano.");
    puts("   Quando se encontram?");

    // Loop para calcular em quantos anos Pedro será mais alto que José
    while (jose != pedro) {
        jose += 2;  // José cresce 2 centímetros por ano
        pedro += 3; // Pedro cresce 3 centímetros por ano
        ano++;      // Incrementa o contador de anos

        // Exibe as alturas e o ano atual
        printf("\nJosé: %d centímetros, Pedro: %d centímetros, ano: %d\n", jose, pedro, ano);
    }

    // Exibe o resultado
    printf("\nPronto! Eles têm a mesma altura em %d anos! Se continuarem crescendo na mesma velocidade.\n", ano);

    return 0;
}