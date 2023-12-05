#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *createVector(int sizeVector, int maxRand);
int printVector(int *vector, int sizeVector);
int *lowVector(int *vector);
int main(int argc, char *argv[]){

	if (argc != 3) {
		printf("Error: Format: %s <size_vector> <highest_number>\n", argv[0]);
		exit(1);
	}
	
	int sizeVector = atof(argv[1]);
	int maxRand = atof(argv[3]);

	if (sizeVector == 0 && strcmp(argv[1], "0") != 0) {
    	printf("Error: Invalid input for 'size_vector'\n");
    	exit(2);
	}

	if (maxRand == 0 && strcmp(argv[2], "0") != 0) {
    	printf("Error: Invalid input for 'highest_number'\n");
    	exit(3);
	}
	
	int *vector = createVector(sizeVector, maxRand);
	printVector(vector, sizeVector);

	int *lowest =  

	
