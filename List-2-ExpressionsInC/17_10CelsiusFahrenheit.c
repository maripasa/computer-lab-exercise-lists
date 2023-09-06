#include <stdio.h>

#define TABLE_START 0
#define TABLE_END 100
#define TABLE_INTERVAL 10

int main(){
	
	int input;

	puts("\n== Tabela Celsius-Fahrenheit de 10 em 10 ==");

	for ( int x = TABLE_START ; x <= TABLE_END ; x += 10 ) {
	
		printf("\n%dC = %dF", x, ((x * 9 / 5) + 32));
	
	}

	puts("\n\nFim\n");
	return 0;
}
