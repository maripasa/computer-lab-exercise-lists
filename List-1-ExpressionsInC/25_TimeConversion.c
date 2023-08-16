// 25. Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos há neste tempo.

#include <stdio.h>

int main() {
    
    int segInput, horas = 0, minutos = 0, segundos = 0;

    // Solicita uma quantidade de segundos ao usuario
    printf("Digite uma quantidade de segundos: ");
    scanf("%d", &segInput);

    // Converte segundos em horas, minutos e segundos
    if (segInput >= 3600) {
        horas = segInput / 3600;
        segInput = segInput % 3600;
    }

    if (segInput >= 60) {
        minutos = segInput / 60;
        segInput = segInput % 60;
    }

    segundos = segInput;

    // Imprime o valor em horas, minutos e segundos
    puts("\nO valor em horas, minutos e segundos da quantidade dada (H:M:S):");
    printf("%d:%d:%d", horas, minutos, segundos);

    return 0;

}