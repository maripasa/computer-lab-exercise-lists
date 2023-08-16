// 26. Fazer um programa para calcular a distância entre dois pontos no plano.

#include <stdio.h>
#include <math.h>

int main() {
    
    int x1, y1, x2, y2;
    float distancia;

    // Solicita as coordenadas do ponto 1 ao usuario
    printf("Digite a coordenada do ponto 1 (x y): ");
    scanf("%d %d", &x1, &y1);

    // Solicita as coordenadas do ponto 2 ao usuario
    printf("\nDigite a coordenada do ponto 2 (x y): ");
    scanf("%d %d", &x2, &y2);

    // Calcula a distancia entre os pontos usando a formula da distancia euclidiana
    distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // Imprime a distancia entre os dois pontos
    printf("\n\nA distancia entre os dois pontos: %f", distancia);
    
    return 0;

}