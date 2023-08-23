#include <stdio.h>

int main(){

	float num1, num2;
	char operation;
	
	while (1){
	
		scanf(" %f %c %f", &num1, &operation, &num2);

		switch (operation) {
			case '+':
				printf("%f\n",num1 + num2);
				break;
			case '-':
				printf("%f\n",num1 - num2);
				break;
			case '*':
				printf("%f\n",num1 * num2);
				break;
			case '/':
				printf("%f\n",num1 / num2);
				break;
			default:
				puts("huh?");
		}
	}
	return 0;

}
