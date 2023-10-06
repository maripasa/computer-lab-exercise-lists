#include <stdio.h>
#include <string.h>

#define SIZE 50 

// Function Declarations
void charInvert(char vector[SIZE]);

// Main Func
int main() {
    char string[SIZE];

    printf("String: \n> ");
    fgets(string, SIZE, stdin);

    charInvert(string);
    printf("A string fornecida invertida: %s \n", string);

    return 0;
}

// Function Definitions
void charInvert(char vector[SIZE]){
    char inverted[SIZE];
    int i = strlen(vector) - 1;

    for (int y = 0; y <= i; y++, i--) {
        inverted[y] = vector[i];
        inverted[i] = vector[y];
    }
    
    inverted[strlen(vector)] = '\0';
    strcpy(vector, inverted); 
}
