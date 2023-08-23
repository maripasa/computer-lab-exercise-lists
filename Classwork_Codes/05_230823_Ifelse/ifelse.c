#include <stdio.h>

int main(){

	unsigned int idade;

	printf("Digite sua idade");
	scanf("%d",&idade);

	if (idade < 16) {
	printf("Nao pode votar, nem dirigir");
	} else if (idade < 18) {
	printf("Pode votar, mas nao dirigir");
	} else {
	printf("Pode votar e dirigir");
	}

	return 0;

}
