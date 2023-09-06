#include <stdio.h>

#define RESET_SUM 0

int main(){
	
	int inputA, inputB, hold;
	int sum;
	
	puts("\n== Somatório dos Pares ==\n");

	while (1) {
	
	sum = RESET_SUM;

	printf("\n\nInsira o alcance (a b): ");
	scanf("%d %d", &inputA, &inputB);

	if ( inputA < inputB ){

	for( hold = inputA ; hold <= inputB ; hold++ ){
		
		if (!( hold % 2 )) {

			sum +=  hold;
			printf(" + %d", hold);

		}
	}
	}else {

	for( hold = inputA ; hold >= inputB ; hold-- ){

		if (!( hold % 2 )) {

			sum += hold;
			printf(" + %d", hold);

		}
	}
	}
	
	printf("\nO somatório dos números no alcance indicado é: %d", sum);

	}

	
	return 0;
}
