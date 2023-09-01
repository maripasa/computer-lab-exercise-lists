#include <stdio.h>

int main(){
	
	int x, y;

	puts("\n== QUADRADO DOS MULTIPLOS DE 4  ==");	
	puts("PS: Eu considerei que é de x a y, significando que se y > x vai ao contrário\n");

	while (1) {

	printf("\nInsira 2 inteiros (x y): ");
	scanf("%d %d", &x, &y);
	
	if ( x < y ){

	for( ; x <= y ; x++ ){

		if (!( x % 4 )) printf("Quadrado de %d = %d\n", x, ( x * x ));
	
	}}else {

	for( ; x >= y ; x-- ){

		if (!( x % 4 )) printf("Quadrado de %d = %d\n", x, ( x * x ));
	
	}}
	}

	return 0;
}
