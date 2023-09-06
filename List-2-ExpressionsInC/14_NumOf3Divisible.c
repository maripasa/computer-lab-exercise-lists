#include <stdio.h>

#define RESET_SUM 0

int main(){
	
	int inputA, inputB, hold;
	int sum;
	
	puts("\n== Quantidade de Divisíveis por 3 ==\n");

	while (1) {
	
	sum = RESET_SUM;

	printf("\n\nInsira o alcance (a b): ");
	scanf("%d %d", &inputA, &inputB);

	if ( inputA < inputB ){

	for( hold = inputA ; hold <= inputB ; hold++ ){
		
		if (!( hold % 3 )) {

			sum += 1;
			printf("%d, ", hold);

		}
	}
	}else {

	for( hold = inputA ; hold >= inputB ; hold-- ){

		if (!( hold % 3 )) {

			sum += 1;
			printf("%d, ", hold);

		}
	}
	}
	
	printf("\nA quantia de divisíveis por 3 no alcance é %d", sum);

	}

	
	return 0;
}
