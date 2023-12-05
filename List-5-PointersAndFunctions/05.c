#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float *fcreateVector(int sizeVector, int maxRand);
void fprintVector(float *vector, int sizeVector);
float fvectorSum(float *vector, int sizeVector);

int main(int argc, char *argv[]){
	
	srand(time(NULL));

	if (argc != 3) {
		printf("Error: Format: %s <size_vector> <highest_number>\n", argv[0]);
		exit(1);
	}
	
	int sizeVector = atoi(argv[1]);
	int maxRand = atoi(argv[2]);
	
	float *vector = fcreateVector(sizeVector, maxRand);
	fprintVector(vector, sizeVector);
	
	printf("%f", fvectorSum(vector, sizeVector));

	free(vector);
	
	return 0;
}

float* fcreateVector(int sizeVector, int maxRand){
	
	float *vector = (float*) malloc(sizeVector * sizeof(float));

	for (int x = 0; x < sizeVector; x++) {
		
		vector[x] = (float) (rand() % maxRand) / 7;
	
	}	

	return vector;

}

void fprintVector(float *vector, int sizeVector){
	
	printf("Vector: |");

	for (int x = 0; x < sizeVector; x++){

		printf("%f|", vector[x]);
	}

	puts("");
}

float fvectorSum(float*vector, int sizeVector){

	float sum = 0;

	for (int x = 0; x < sizeVector; x++){

		sum += vector[x];

	}

	return sum;

}
		
