#include <stdio.h>
#include <string.h>

#define SIZE 50 

// Function Declarations
int catRaw(char vector1[SIZE], char vector2[SIZE]);

// Main Func
int main() {

int choice;
char string1[SIZE];
char string2[SIZE];

printf("String 1: \n> ");
fgets(string1, SIZE, stdin);

printf("String 2: \n> ");
fgets(string2, SIZE, stdin);

printf("strcat() ou catRaw() (1 ou 2):");
scanf("%d", &choice);

switch ( choice ) {

	case 1:	
		strcat(string1, string2);	
		printf("strcat:\n%s\n", string1);
		break;
	case 2:	
		catRaw(string1, string2);
		printf("catRaw:\n%s\n", string1);
		break;
	default:
		puts("Nada foi escolhido.");	
}

return 0;

}

// Function Definitions
int catRaw(char vector1[SIZE], char vector2[SIZE]){

    int i, j;

    // Find the end of vector1
    for (i = 0; i < SIZE && vector1[i] != '\0'; i++) {
    }

    // Concatenate vector2 to vector1
    for (j = 0; i < SIZE && j < SIZE && vector2[j] != '\0'; i++, j++) {
        vector1[i] = vector2[j];
    }

    // Null-terminate the concatenated string
    vector1[i] = '\0';

    return 1;

}

