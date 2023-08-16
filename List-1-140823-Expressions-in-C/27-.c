#include <stdio.h>
#include <math.h>

int main(){
	
	float num1, num2, num3;

	printf("Digite 3 valores float: ")
	scanf(" %f %f %f", &num1, num2, num3);

	float mediaAri = (num1 + num2 + num3) / 3;
	float mediaGeo = pow((num1 * num2 * num3), 1.0 / 3);

	printf("\nA media aritimetica: %f", mediaAri);
	printf("\nA media geometrica: %f"\n, mediaGeo);

	return 0;	
		
}
