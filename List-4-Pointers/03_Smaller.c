#include <stdio.h>

int main(){

	int num;
	int menor = 0;
	int leave; 
	int *ptr_menor = &menor;

	printf("Insira um número para sair: \n> ");
	scanf("%d", &leave);
		
	while (1){
		
		printf("Insira um número (%d para encerrar)\n> ", leave);
		scanf("%d", &num);
		
		if(num == leave) puts("leaving"); exit(0);

		if(menor < *ptr_menor )
		
	}


}


