#include <stdio.h>

int main(){

	float comp;
	float larg;
	float altu;

	printf("Digite o comprimento, a largura e a altura do volume a medir (C L A):");
	scanf(" %f %f %f", &comp, &larg, &altu);
	printf("\nO volume calculado: %f", (comp * larg * altu));

return 0;
}	
