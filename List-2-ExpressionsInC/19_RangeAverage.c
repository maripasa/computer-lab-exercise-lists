#include <stdio.h>

#define RESET_SUM 0

int main(){
	
	int inputA, inputB, hold;
	int qntNum, sumNum;
	
	puts("\n== média do alcance ==\n");

	while (1) {
	
	qntNum = RESET_SUM;
	sumNum = RESET_SUM;

	printf("\n\nInsira o alcance (a b): ");
	scanf("%d %d", &inputA, &inputB);

	if ( inputA < inputB ){

		for( hold = inputA ; hold <= inputB ; hold++ ){
		
			qntNum += 1;
			sumNum += hold;

		}
	
	}else {

		for( hold = inputA ; hold >= inputB ; hold-- ){

			qntNum += 1;
			sumNum += hold;

		}
	}
	printf("\nA média do alcance é %f", ((float)sumNum / qntNum));

	}

	
	return 0;
}
