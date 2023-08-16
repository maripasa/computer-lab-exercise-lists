#include <stdio.h>
#include <math.h>

int main (){

	int input;

	printf("Digite um inteiro\n");
	scanf("%d", &input);

	input = input * input;

	input = sqrt(input);

	printf("O modulo: %d", input);

	return 0;

}
