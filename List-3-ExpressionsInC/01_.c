#include <stdio.h>

#define SIZE 16 

// Function Declarations
void takeInput(float vector[SIZE]);
float sumVector(float vector[SIZE]);

// Main Func
int main() {

float numbers[SIZE];

takeInput(numbers);

printf("%f/n", sumVector(numbers));

return 0;

}

// Function Definitions
void takeInput(float vector[SIZE]){
	
	for ( int i = 0 ; i < SIZE ; i++ ) {
		
		printf("> ");
		scanf("%f", &vector[i]);
	
	}

}

float sumVector(float vector[SIZE]) {

	float sum = 0;

	for ( int i = 0 ; i < SIZE ; i++ ){
	
		sum += vector[i];
	
	}

	return sum;
}

