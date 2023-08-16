#include <stdio.c>

int main(){
	
	float horaAula;
	int horaTrabalhada;
	int percentualINSS;

	printf("Digite o valor da hora aula: ");
	scanf("%f", &horaAula);

	printf("Digite a quantia de horas trabalhadas:  ");
	scanf("%d", &horaTrabalhada);

	printf("Digite o percentual do INSS (%):  ");
	scanf("%d", &percentualINSS);

	//adicionar header

	printf("Salario bruto: %2.f\n\n", (horaAula * horaTrabalhada));

	printf("Desconto INSS: %2.f\n\n", ((horaAula * horaTrabalhada) * (percentualINSS / 100)));

	printf("SALARIO LIQUIDO: %2.f\n\n", ((horaAula * horaTrabalhada) - (horaAula * horaTrabalhada) * (percentualINSS / 100)));

	return 0;
}
