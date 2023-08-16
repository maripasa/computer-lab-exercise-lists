include <stdio.h>

int main() {
	int num;

	printf("Digite um número inteiro:");
	scanf("%d", &num);

	printf("\nRepresentação em base octal: %o\n", num);
	printf("Representação em base hexadecimal: %X\n", num);

	return 0;
}
