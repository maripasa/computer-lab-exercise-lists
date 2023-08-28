// give some numbers, say which is the highest one and if its even or odd until user break
#include <stdio.h>

int main(){

	int input;
	int oldinput = 0;

	while (1){
		
		printf("\nType a integer: ");
		scanf("%d",&input);

		if (oldinput == 0){
			oldinput = input;
		}else if (oldinput < input){
			oldinput = input;
		}

		(oldinput % 2) ? printf("O maior valor dado: %d, impar\n", oldinput) : printf("O maior valor dado: %d, par\n", oldinput);

	}

	return 0;
}
