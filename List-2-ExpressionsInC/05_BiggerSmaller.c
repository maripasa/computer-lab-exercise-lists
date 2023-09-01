#include <stdio.h>

int main(){

	int input;
	int bigger = 0;
	int smaller = 0;

	while (1){
		
		printf("\nType a integer: ");
		scanf("%d",&input);

		if ((bigger == 0) & (smaller == 0)){
			bigger = input;
			smaller = input;
	
		} else {
			if (bigger < input){
				bigger = input;
			}
			if (smaller > input){
				smaller = input;
			}
		}

	(bigger % 2) ? printf("O maior valor dado: %d, impar\n", bigger) : printf("O maior valor dado: %d, par\n", bigger);
	(smaller % 2) ? printf("O menor valor dado: %d, impar\n", smaller) : printf("O menor valor dado: %d, par\n", smaller);
	}

	return 0;
}
