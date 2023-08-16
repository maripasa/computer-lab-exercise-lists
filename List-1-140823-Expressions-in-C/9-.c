#include <stdio.h>

int main(){

	int input;

	printf("Digite um inteiro");
	scanf("%d", &input);

	printf("\nO antecessor de %d: %d", input, (input - 1));

	printf("\nO sucessor de %d: %d", input, (input + 1));
	return 0;
}
