#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *createVector(int sizeVector, int maxRand);
void printVector(int *vector, int sizeVector);
float EMQ(int *vector1, int *vector2, int sizeVector);

int main(int argc, char *argv[]){
	
	srand(time(NULL));

	if (argc != 3) {
		printf("Error: Format: %s <size_vector> <highest_number>\n", argv[0]);
		exit(1);
	}
	
	int sizeVector = atoi(argv[1]);
	int maxRand = atoi(argv[2]);
	
	int *vector1 = createVector(sizeVector, maxRand);
    int *vector2 = createVector(sizeVector, maxRand);
	printVector(vector1, sizeVector);
    printVector(vector2, sizeVector);

	free(vector1);
	free(vector2);

    float emq = EMQ(vector1, vector2, sizeVector);

    printf("%f", emq);

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

float EMQ(int *vector1, int *vector2, int sizeVector){

    float sum = 0;

    for (int x = 0; x < sizeVector; x++){

        sum = (vector1[x] - vector2[x]) * (vector1[x] - vector2[x]);

    }

    float EMQ = sum / sizeVector;

    return EMQ;

}