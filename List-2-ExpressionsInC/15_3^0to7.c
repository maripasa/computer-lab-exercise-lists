#include <stdio.h>
#include <math.h>

#define EXP_START 0
#define EXP_END 7
#define EXP_BASE 3

int main(){
	
	int hold, result;
	
	puts("\n== Exponenciador ==\n");

	for ( hold = EXP_START ; hold <= EXP_END ; hold++ ) {
		
		result = pow(EXP_BASE, hold);
		printf("> %d^%d = %d\n", EXP_BASE, hold, result);
	
	}	
	
	puts("\nFim\n");
	return 0;
}
