#include <stdio.h>

int main(){
	
	int input;
	int fatorial;
	
	puts(" == GERADOR DE FIBONNACI == \n");
	
	while (1) {

	printf("\n\nInsira um numero: ");
	scanf("%d", &input);
	
	int n = input;
	
	for (fatorial = 1; n > 1; n--) {
		
		fatorial = fatorial * n;
		printf("%d, ", fatorial);

	}

	printf("\nO valor de !%d: %d", input, fatorial);
	}	

	return 0;
}
