#include <stdio.h>

int main(){
	
	int x;

	puts("\n== QUADRADO DOS MULTIPLOS DE 4 (15 a 90 ==\n");	
	
	for( x = 15 ; x <= 90 ; x++ ){

		if (!( x % 4 )) printf("Quadrado de %d = %d\n", x, ( x * x ));
	
	}

	return 0;
}
