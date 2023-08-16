// 5. Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser pago,
// considerando que o restaurante cobra 10% de taxa para o garçom.

#include <stdio.h>

int main() {

    float input;

    // Solicita o valor da conta ao usuário
    printf("Insira o valor da conta: ");
    scanf("%f", &input);


    // Imprime o valor da conta com taxa de serviço
    printf("\n\n---------- Conta ----------\n");
    
    printf("Valor da conta: %.2f\n", input);
    printf("Taxa de servico: %.2f\n", (input / 10));
    printf("\nTotal a pagar: %.2f\n", (input + (input / 10)));

    return 0;

}