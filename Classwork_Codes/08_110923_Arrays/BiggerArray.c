// give some numbers, say which is the highest one and if its even or odd until user break
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE_ARRAY 50
#define MX 100

int main() {

	int numberList[SIZE_ARRAY];
	
	int bigger = 0;

	srand(time(NULL));

	for ( int i = 0 ; i < SIZE_ARRAY ; i++ ) {
	
		numberList[i] = rand()%MX;
		
	}	
	
	for ( int i = 0 ; i < SIZE_ARRAY ; i++ ) {
	
		if ( bigger == 0 ) {

			bigger = numberList[i];
		
		} else if ( bigger < numberList[i] ) {
			
			bigger = numberList[i];	
	        }
	}

	printf("\n\n%d", bigger);

}
