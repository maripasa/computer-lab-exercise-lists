#include <stdio.h>

int main(){

	float celsius;
	float fahr;

	printf("Digite uma temperatura em Celsius (C): ");
	scanf("%f", &celsius);

	fahr = (9 * celsius + 160) / 5;
	
	printf("A temperatura em Fahrenheit: %f", fahr);

	return 0;
}
