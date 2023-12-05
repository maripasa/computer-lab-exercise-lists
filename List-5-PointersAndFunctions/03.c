#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *createVector(int sizeVector, int maxRand);
void printVector(int *vector, int sizeVector);
int **lowVector(int *vector, int sizeVector);

int main(int argc, char *argv[]){
	
	srand(time(NULL));

	if (argc != 3) {
		printf("Error: Format: %s <size_vector> <highest_number>\n", argv[0]);
		exit(1);
	}
	
	int sizeVector = atoi(argv[1]);
	int maxRand = atoi(argv[2]);
	
	int *vector = createVector(sizeVector, maxRand);

	printVector(vector, sizeVector);

	int **extremes = lowVector(vector, sizeVector); 

	puts("Extreme Values:");
	printf("[%p]: %d\n",extremes[0], *extremes[0]);
	printf("[%p]: %d\n",extremes[1], *extremes[1]);

	free(vector);
	
	return 0;
}

int *createVector(int sizeVector, int maxRand){
	
	int *vector = (int*) malloc(sizeVector * sizeof(int));

	for (int x = 0; x < sizeVector; x++) {
		
		vector[x] = rand() % maxRand;
	
	}	

	return vector;

}

void printVector(int *vector, int sizeVector){
	
	printf("Vector: |");

	for (int x = 0; x < sizeVector; x++){

		printf("%d|", vector[x]);
	}

	puts("");
}
		
		
int **lowVector(int *vector, int sizeVector){

	int lowest = 0;
	int highest = 0;
	int** pExtreme = (int**) malloc(2 * sizeof(int));

	for (int x = 0; x < sizeVector; x++){

		if (lowest == 0 || lowest > vector[x]) {lowest = vector[x];pExtreme[0] = &vector[x];}
		if (highest == 0 || highest < vector[x]) {highest = vector[x];pExtreme[1] = &vector[x];}
	}

	return pExtreme;

}
