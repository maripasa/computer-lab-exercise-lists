#include <stdio.h>
#include <stdlib.h>

// Prototipo de função

int main(int argc, char *argv[]){

	if (argc != 3) {
		printf("Quantidade de argumentos inválida (%s)", *argv);
		exit(1);
	}
	
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	int total;

	int *pointerX = &x;
	int *pointerY = &y;
	int *pointerTotal = &total;
	
	*pointerTotal = *pointerX + *pointerY; 		
	
	printf("X: %d  [%p]\n", *pointerX, pointerX);
	printf("Y: %d  [%p]\n", *pointerY, pointerY);
	printf("Total: %d  [%p]\n", *pointerTotal, pointerTotal);

	return 0; 

}

// Definição de função

