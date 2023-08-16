#include <stdio.h>

int main(){

	int hora;
	int minu;
	int segu;

	printf("Digite um horario (H M S): ");
	scanf(" %d %d %d", hora, minu, segu);

	if (minu > 60){
		printf("Numero de minutos maior de 60");
		return 1;

	} else if (segu > 60){
		printf("Numero de segundos maior de 60");
		return 1;
	}	

	printf("\nHorario dado em segundos: %d", (hora * 3600 + minu * 60 + segu);
	return 0;


}
