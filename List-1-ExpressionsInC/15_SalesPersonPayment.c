// 15. Uma empresa contrata um vendedor a R$ 50,25 por dia...

#include <stdio.h>

int main() {

    int dias;
    float salarioDia = 50.25;
    float salarioTotal;
    
    // Solicita o número de dias trabalhados ao usuário
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);
    
    // Calcula o salário total
    salarioTotal = dias * salarioDia;
    
    // Imprime a folha de pagamento
    puts("\n---------- FOLHA DE PAGAMENTO ----------\n");

    printf("Salario por dia: %.2f\n\nSalario Bruto: %.2f\n\n", salarioDia, salarioTotal);

	// Busca por adicionais
    if (dias > 20) {
        printf("Adicional de 20%%: %.2f\n\n", (salarioTotal * 0.2));
        salarioTotal = salarioTotal * 1.2;
    } else if (dias > 10) {
        printf("Adicional de 30%%: %.2f\n\n", (salarioTotal * 0.3));
        salarioTotal = salarioTotal * 1.3;
    }

    printf("Salario Bruto c/ adicionais: %.2f\n\n", salarioTotal);
    printf("Imposto de renda 10%%: %.2f\n\n", (salarioTotal * 0.1));
    printf("Salario Liquido Final: %.2f\n\n", (salarioTotal * 0.9));

    return 0;

}