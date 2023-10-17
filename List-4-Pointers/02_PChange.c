#include <stdio.h>
#include <stdlib.h>

// Prototipo de função

int main(int argc, char *argv[]){

	if (argc != 3) {
		printf("Quantidade de argumentos inválida (%s)\nCorreto: <valor1> <valor2>", *argv);
		exit(1);
	}
	
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	int hold;

	int *pointerX = &x;
	int *pointerY = &y; 		
	int *pointerHold = &hold;

	printf("X: %d  [%p]\n", *pointerX, pointerX);
	printf("Y: %d  [%p]\n\n", *pointerY, pointerY);

	*pointerHold = *pointerX;
	*pointerX = *pointerY;
	*pointerY = *pointerHold;

	printf("X: %d  [%p]\n", *pointerX, pointerX);
	printf("Y: %d  [%p]\n", *pointerY, pointerY);

	return 0; 

}

// Definição de função

