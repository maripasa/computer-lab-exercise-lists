#include <stdio.h>

int main() {

	int jose = 150;
	int pedro = 110;
	int ano = 0;

	puts("1. José tem 150 centimetros, e cresce 2 ao ano,");
	puts("2. Pedro tem 110, mas cresce 3 ao ano.");
	puts("	Quando se encontram?");

	while ( jose != pedro ) {
	
		jose += 2;
		pedro += 3;
		ano++;

		printf("\nJosé: %d centimetros, Pedro: %d centimetros, ano: %d\n", jose, pedro, ano);
	}

	printf("\nPronto! Eles tem a mesma altura em %d anos! Se continuarem crescendo na mesma velocidade", ano);
	
	return 0;
}
