#include <stdio.h>

#define SIZE_GRADE 3

int main() {

	float average[SIZE_GRADE];
	float sum = 0;

	for ( int i = 0 ; i < SIZE_GRADE ; i++ ) {
	
		scanf("%f", &average[i]);
		sum += average[i];
	}
	
	printf("%f", ( sum / SIZE_GRADE ));

}
