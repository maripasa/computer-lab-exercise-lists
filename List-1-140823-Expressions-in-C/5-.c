#include <stdi.o>

int main() {
	float input;

	printf("Insira o valor da conta: \n");
	scanf("%d", &input);
	printf("\n---------- Conta ----------\n");
	printf("Valor da conta: %2.f\n", input);
	printf("Taxa de servico: %2.f\n", (input / 10));
	printf("\nTotal a pagar: %2.f\n", (input + (input / 10));

return 0;
}		
