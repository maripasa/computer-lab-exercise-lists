#include <stdio.h>

int main(){
	
	int a;
	int b;

	printf("Digite 2 valores inteiros, 'a' e 'b' (a b): ");
	scanf(" %d %d", &a, &b);
	printf("\nSoma: %d \nProduto: %d \nDiferenca: %d \nQuonciente: %d \nResto: %d", (a + b), (a * b), (a - b), (a / b), (a % b));
	return 0;
}
