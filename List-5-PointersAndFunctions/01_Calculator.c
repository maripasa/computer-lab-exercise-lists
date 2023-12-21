#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float sum(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main(int argc, char *argv[]){

	if (argc != 4) {
		printf("Error: Format: %s <a> <operation> <b>\n", argv[0]);
		exit(1);
	}
	
	float value1 = atof(argv[1]);
	float value2 = atof(argv[3]);
	char *operation = argv[2];

	if (value1 == 0 && strcmp(argv[1], "0") != 0) {
    	printf("Error: Invalid input for 'a'\n");
    	exit(1);
}

	if (value2 == 0 && strcmp(argv[3], "0") != 0) {
    	printf("Error: Invalid input for 'b'\n");
    	exit(1);
	}
	
	float result;

if (strcmp(operation, "+") == 0) {
    result = sum(value1, value2);
} else if (strcmp(operation, "-") == 0) {
    result = subtract(value1, value2);
} else if (strcmp(operation, "*") == 0) {
    result = multiply(value1, value2);
} else if (strcmp(operation, "/") == 0) {
    result = divide(value1, value2);
} else {
    printf("Error: Operation '%s' is invalid\n", operation);
    exit(2);
}

	printf("= %f\n", result);
	return 0;
}

float sum(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero is not allowed\n");
        exit(3);
    }
}
