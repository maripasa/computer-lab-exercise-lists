#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *createVector(int sizeVector, int maxRand);
void printVector(int *vector, int sizeVector);
int sumVector(int *vector, int sizeVector);
int compare(const void *a, const void *b);
float median(int *vector, int sizeVector);
float mean(int *vector, int sizeVector);
void mode(int *vector, int sizeVector);

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
	
	float meanValue = mean(vector, sizeVector);
	float medianValue = median(vector, sizeVector);
		
	printf("Média: %f\n", meanValue);
	printf("Mediana: %d\n", medianValue);
	mode(vector, sizeVector);

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
	
	printf("Vector: | ");

	for (int x = 0; x < sizeVector; x++){

		printf("%d |", vector[x]);
	}

	puts("");
}

int sumVector(int *vector, int sizeVector){

	int sum = 0;

	for (int x = 0; x < sizeVector; x++){

		sum += vector[x];

	}

	return sum;
}

int compare(const void *a, const void *b){

	return (*(int *)a - *(int *)b);

}

float mean(int *vector, int sizeVector){

	float sum = 0;
	for (int i = 0; i < sizeVector; i++){
		sum += vector[i];
	}
	return sum / sizeVector;
}

float median(int *vector, int sizeVector){

	qsort(vector, sizeVector, sizeof(int), compare);

	if (sizeVector % 2 == 0) {

		return ((vector[sizeVector / 2 - 1] + vector[sizeVector / 2]) / 2.0);

	} else {

		return vector[sizeVector / 2];
	
	}
	}

void mode(int *vector, int sizeVector){

	qsort(vector, sizeVector, sizeof(int), compare);

	int mode = vector[0];
	int count = 1;

	int maxMode = mode;
	int maxCount = count;

	for (int i = 1; i < sizeVector; i++) {

		if (vector[i] == vector[i-1]) {
			count++;
		}else{
			if (count > maxCount) {
				maxCount = count;
				maxMode = mode;
			}

			count = 1;
			mode = vector[i];

			}
	}

	if (count > maxCount) {

		maxMode = mode;

	}

	if (count > 1) {

		printf("Mode: %d (%d times)\n", maxMode, maxCount);

	} else {

		printf("No mode");

	}
}

