#include <stdio.h>

#define BOARD_SIZE 64
#define GROWTH_RATE 2

int main(){
	
	unsigned long long currentGrowth = 1;
	unsigned long long grainCount = 0;
	
	puts("\n== Quantos grãos cabem no tabuleiro? ==\n");

	for ( int x = 1 ; x <= BOARD_SIZE ; x++ ) {
	
		grainCount += currentGrowth;
		currentGrowth *= GROWTH_RATE;

	}

	printf("O total de grãos será de %llu grãos.\n", grainCount);	

	puts("\nFim\n");
	return 0;
}
