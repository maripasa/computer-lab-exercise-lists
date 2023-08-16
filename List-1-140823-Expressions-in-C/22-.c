#include <stdio.h>

int main(){
	
	char input;
	
	printf("Digite um caractere: ");
	scanf("%c", &input);

	puts("Caracteres convertidos em inteiros (requeridos e input):");
	
	printf("char %c = int %d\n", 'A', 'A');
	printf("char %c = int %d\n", 'B', 'B');
	printf("char %c = int %d\n", 'C', 'C');
	printf("char %c = int %d\n", 'a', 'a');
	printf("char %c = int %d\n", 'b', 'b');
	printf("char %c = int %d\n", 'c', 'c');
	printf("char %c = int %d\n", '0', '0');
	printf("char %c = int %d\n", '1', '1');
	printf("char %c = int %d\n", '2', '2');
	printf("char %c = int %d\n", '*', '*');
	printf("char %c = int %d\n", '+', '+');
	printf("char %c = int %d\n", '/', '/');
	printf("char %c = int %d\n", ' ', ' ' );
	puts("\nValor Inserido: \n")
	printf("char %c = int %d\n", input, input);
	
	return 0;

}
