// 16. Desenvolva um programa que calcule o salário líquido de um professor.

#include <stdio.h>

int main() {

    float horaAula;
    int horaTrabalhada;
    int percentualINSS;

    // Solicita o valor da hora aula ao usuário
    printf("Digite o valor da hora aula: ");
    scanf("%f", &horaAula);

    // Solicita a quantidade de horas trabalhadas ao usuário
    printf("Digite a quantia de horas trabalhadas: ");
    scanf("%d", &horaTrabalhada);

    // Solicita o percentual do INSS ao usuário
    printf("Digite o percentual do INSS (%%): ");
    scanf("%d", &percentualINSS);

    // Imprime a folha de pagamento
    puts("\n---------- FOLHA DE PAGAMENTO ----------\n");

    printf("Salario bruto: %.2f\n\n", (horaAula * horaTrabalhada));
    printf("Desconto INSS: %.2f\n\n", ((horaAula * horaTrabalhada) * (percentualINSS / 100.0)));
    printf("SALARIO LIQUIDO: %.2f\n\n", ((horaAula * horaTrabalhada) - (horaAula * horaTrabalhada) * (percentualINSS / 100.0)));

    return 0;

}