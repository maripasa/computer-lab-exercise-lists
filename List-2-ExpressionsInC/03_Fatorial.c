#include <stdio.h>

int main(){

	unsigned input;
	unsigned fatorial = 1;
	unsigned i;

	printf("\nInsira um número positivo: ");
	scanf("%u", &input);

	for (i = input; i > 0; i--) {
		fatorial = i * fatorial;
	}
	
	printf("O fatorial de %u : %u\n\n", input, fatorial);

	return 0;
}
