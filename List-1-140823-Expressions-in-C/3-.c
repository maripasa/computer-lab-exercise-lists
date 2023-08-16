#include <stdi.o>

int main (){
	float input;

	printf("Digite um numero: ");
	scanf("%f", &input);
	printf("Numero com uma linha de precisao: %.1f\n", input);

	return 0;
}
