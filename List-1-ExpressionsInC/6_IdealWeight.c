// 6. Fazer um programa para ler a altura (em metros) e o sexo de uma pessoa e calcular o seu peso ideal.

#include <stdio.h>

int main() {

    char sexo;
    float altura;
    float peso;
    
    // Solicita o sexo (M/F) e altura em metros ao usuário (Use o espaço para separar respostas)
    printf("Insira seu sexo (M/F) e altura em metros Ex:(M 1.90): ");
    scanf(" %c %f", &sexo, &altura);
    
    // Verifica o sexo inserido e calcula o peso ideal
    if (sexo == 'M') {

        peso = 72.7 * altura - 58;

    } else if (sexo == 'F') {

        peso = 62.1 * altura - 44.7;     
    
	} else {
        // Caso o sexo inserido seja inválido
        printf("\nDados inseridos incorretamente.");
        return 1;
    }
    
    // Imprime o peso ideal calculado
    printf("\nSeu peso ideal: %.2f", peso);

    return 0;

}