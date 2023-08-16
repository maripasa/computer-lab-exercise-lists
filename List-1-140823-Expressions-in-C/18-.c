#include <stdio.h>

int main(){
	
	float raio;
	float pi = 3.14159

	printf("Digite o raio da circuferencia: ");
	scanf("%f", &raio);

	printf("\n\nDiametro: %f", (raio * 2));
	printf("\n\nCircufencia: %f", (2 * pi * raio));
	printf("\n\nArea: %f", (pi * raio * raio));

	return 0;

}
		
}
