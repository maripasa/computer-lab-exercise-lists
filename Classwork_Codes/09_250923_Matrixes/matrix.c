#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 5
#define MAT_QTD 10
int fillMatrix(float matrix[DIM][DIM]);
int findBiggerDiag(float matrix[DIM][DIM]);
int showMatrix(float matrix[DIM][DIM]);

int main(){

	float myMatrix[DIM][DIM];

	fillMatrix(myMatrix);
	
	puts("Random Matrix:");
	showMatrix(myMatrix);

	findBiggerDiag(myMatrix);

	return 0;
}

int fillMatrix(float matrix[DIM][DIM]){

	// Geração da semente
	srand(time(NULL));

	for (int i = 0; i < DIM; i++)
	{
		for (int j = 0; j < DIM; j++)
		{
			matrix[i][j] = (((float)rand()) / RAND_MAX) * MAT_QTD; // Gere números aleatórios e divida por 10.0
		}
	}

}

int findBiggerDiag(float matrix[DIM][DIM]){

	float biggerDiag = matrix[0][0]; // Inicialize com o primeiro elemento da diagonal principal

	for (int i = 0; i < DIM; i++){

		for (int j = 0; j < DIM; j++){

			if (i == j && matrix[i][j] > biggerDiag) {

				biggerDiag = matrix[i][j];
			}
		}
	}

	printf("\nMaior elemento na diagonal principal:");
	printf("\033[1;32m"); // Set the text to bold green
	printf("%f\n", biggerDiag);
    	printf("\033[0m");
	

}

int showMatrix(float matrix[DIM][DIM]) {

	for (int i = 0; i < DIM; i++) {

		for (int j = 0; j < DIM; j++) {

			if (i == j) {

   				printf("\033[1;32m"); // Set the text to bold green
				printf("%f ", matrix[i][j]);
    			printf("\033[0m");

			}else {

				printf("%f ", matrix[i][j]);

			}
		}
		printf("\n");
	}
}
