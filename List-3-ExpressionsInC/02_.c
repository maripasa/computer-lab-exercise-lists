#include <stdio.h>

#define SIZE 16 

// Function Declarations
int charSearch(char vector[SIZE], char foundable);

// Main Func
int main() {

char string[SIZE];
char theChar;

printf("String: \n> ");
fgets(string, SIZE, stdin);

printf("Char: \n> ");
scanf("%c", &theChar);

printf("A string fornecida tem %d ocorrencias de \"%c\"\n", charSearch(string, theChar), theChar);

return 0;

}

// Function Definitions
int charSearch(char vector[SIZE], char foundable){

	int sumFound = 0;	
	
	for ( int i = 0 ; i < SIZE ; i++ ) {
		
		if (vector[i] == foundable) sumFound++;
	
	}

	return sumFound;

}

