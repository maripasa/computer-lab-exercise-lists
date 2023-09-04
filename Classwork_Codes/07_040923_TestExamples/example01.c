#include <stdio.h>

//m é a quantidade de eventos,
//o evento i tem:
//p -> periodo
//C -> segundos
//
//usuário vai dar:
//periodo P
//tempo de CPU C
//
//para 3 eventos

#define N_EVENT 3

int main(){

	int c;
	int p;
	float total;

	puts("ESCALONAVEL:\n");

	int x;

	for ( x = 0 ; x < N_EVENT ; x++ ){
	
		printf("\nInsira os segundos de tempo de CPU (s): ");
		scanf("%d", &c);

		printf("\nInsira o periodo que o evento ocorre: ");
		scanf("%d", &p);

		total += float c / p;
	}
	
	(total <= 1) ? printf("\nÉ escalonável") : printf("\nNão é escalonável");
	
}
