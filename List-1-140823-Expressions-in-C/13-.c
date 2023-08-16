#include <stdio.h>

int main(){

	int a;
	int b;
	int c;

	printf("Digite um valor 'a' e 'b': ");
	scanf(" %d %d", &a, &b);

	c = a;
	a = b;
	b = c;
	
	printf("\nO valor de a: %d \nO valor de b: %d", a, b);

	return 0;
}
