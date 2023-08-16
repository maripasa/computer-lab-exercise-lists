#include <stdio.h>

int main(){
	int dias;
	float salarioDia = 50,25
	float salarioTotal;
	
	printf("Digite o numero de dias trabalhados: ");
	scanf("%d", &dias);
	
	salarioTotal = dias * salarioDia;
		
	puts("---------- FOLHA DE PAGAMENTO ----------\n");
	printf("Salario por dia: %2.f\n\n Salario Bruto: %2.f\n\n", salarioDia, salarioTotal);

	if (dias > 20){
		printf("Adicional de 20%: %2.f\n\n", (salarioTotal * 0.2));
		salarioTotal = salarioTotal * 1.2;
	}else if (dias > 10){
		printf("Adicional de 30%: %2.f\n\n", (salarioTotal * 0.3));
		salarioTotal = salarioTotal * 1.3;
	}
	printf("Salario Bruto c/ adicionais: %2.f\n\n", salarioTotal);
	printf("Imposto de renda 10%: %2.f\n\n", (salarioTotal * 0.1));
	printf("Salario Liquido Final: %2.f\n\n", (salarioTotal * 0.9));

	return 0;
}
