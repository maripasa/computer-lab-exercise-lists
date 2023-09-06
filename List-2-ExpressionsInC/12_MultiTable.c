#include <stdio.h>

#define TAB_END 10

int main(){
	
	int input;
	int tabNum;

	puts("\n== Tabuada Generator ==\n");

	printf("Insira um numero: ");
	scanf("%d", &input);
	
	printf("\n== Tabuada do %d ==\n", input);

	for ( tabNum = 1 ; tabNum <= TAB_END ; tabNum++ ) {
	
		printf("\n > %d * %d = %d ", input, tabNum, (input * tabNum) );
	
	}

	puts("\n\nFim\n");
	return 0;
}
