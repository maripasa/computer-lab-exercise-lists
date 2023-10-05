#include <stdio.h>

#define SIZE 50 

// Function Declarations
int charSize(char vector[SIZE]);

// Main Func
int main() {

char string[SIZE];

printf("String: \n> ");
fgets(string, SIZE, stdin);

printf("A string fornecida tem %d de tamanho\n", charSize(string));

return 0;

}

// Function Definitions
int charSize(char vector[SIZE]){

	for ( int i = 0 ; i < SIZE ; i++ ) {
		
	if (vector[i] == '\n') return i;	
	
	}

}

