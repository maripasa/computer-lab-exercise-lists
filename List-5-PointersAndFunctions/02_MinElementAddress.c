#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *createVector(int sizeVector, int maxRand);
void printVector(int *vector, int sizeVector);
int *lowVector(int *vector, int sizeVector);

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

	int *lowest = lowVector(vector, sizeVector); 
	puts("Lowest value:");
	printf("[%p]: %d\n",lowest, *lowest);

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
		
		
int *lowVector(int *vector, int sizeVector){

	int lowest = 0;
	int* plowest = NULL;

	for (int x = 0; x < sizeVector; x++){

		if (lowest == 0 || lowest > vector[x]) {lowest = vector[x]; plowest = &vector[x];}

	}

	return plowest;

}