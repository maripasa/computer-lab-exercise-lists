#include <stdio.h>

int main(){
	
	int segInput, horas, minutos, segundos;

	printf("Digite uma quantidade de segundos: ");
	scanf("%d", &segInput);

	if (segInput > 3600) {
	
		horas = segInput / 3600;
		segInput = segInput % 3600;

	}

	if (segInput > 60) {
	
		minutos = segInput / 60;
		segInput = segInput % 60;
	
	}

	segundos = segInput

	puts("\nO valor em horas, minutos e segundos da quantidade dada (H:M:S) :")
	printf("%d:%d:%d", horas, minutos, segundos);

	return 0;
	
}
