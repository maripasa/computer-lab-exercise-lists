#include <stdio.h>

int main(){
	
	int a;
	int b;

	printf("Digite um numero inteiro 'a': ");
	scanf("%d", &a);

	printf("\nDigite um numero inteiro: 'b': ");
	scanf("%d", &b);

	(a % b) ? printf("\n\"'A' nao multiplo de 'B'.\"") : printf("\n\"A multiplo de B.\"");

	return 0;

}
