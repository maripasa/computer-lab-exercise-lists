#include <stdio.h>

int main(){
	
	float dolar
	float qntdReais

	printf("Insira cotacao do dolar atual: ");
	scanf("%f", &dolar);
	
	while 1 {
		printf("\nInsira a quantidade em R$ (Reais) a converter: ");
		scanf("%f", &qntdReais);
		printf("\nValor em dolar: %f", qntdReais / dolar);
	}

	return 0;
}
