#include <stdio.h>
#include <math.h>

int main(){
	
	int x1, y1, x2, y2;
	float distancia;

	printf("Digite a cordenada do ponto 1 (x y): ")
	scanf("%d %d", &x1, &y1);

	printf("\nDigite a cordenada do ponto 2 (x y): ")
	scanf("%d %d", &x2, &y2);

	distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	printf("\n\nA distancia entre os dois pontos: %f", distancia);
	
	return 0;
		
}
