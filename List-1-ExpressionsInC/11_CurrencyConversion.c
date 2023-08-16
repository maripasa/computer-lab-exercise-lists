// 11. Elabore um programa que apresente o valor da conversão em dólar de um valor lido em real.

#include <stdio.h>

int main() {

    float dolar;
    float qntdReais;

    // Solicita a cotação atual do dólar ao usuário
    printf("Insira a cotacao do dolar atual: $");
    scanf("%f", &dolar);
    
    // Solicita a quantidade em R$ (Reais) a converter
    printf("\nInsira a quantidade em R$ (Reais) a converter: R$");
    scanf("%f", &qntdReais);
        
    // Calcula e imprime o valor em dólar
    printf("\nValor em dolar: $%f", qntdReais / dolar);


    return 0;

}