#include <stdio.h>
#include <stdlib.h>

int main(){

	int num;
	int menor = 0;
	int leave; 

	int *ptr_menor = &menor;
	int *ptr_num = &num;

	printf("Insira um número para sair: \n> ");
	scanf("%d", &leave);
		
	while (1){
		
		printf("Insira um número (%d para encerrar)\n> ", leave);
		scanf("%d", ptr_num);
	
		printf("\n%d\n", *ptr_num);

		if( *ptr_num == leave ) { puts("leaving"); exit(0); }

		if( *ptr_menor > *ptr_num || *ptr_menor == 0 ) *ptr_menor = *ptr_num;

		printf("Menor: %d\n", *ptr_menor);
		
	}

	return 0;
}