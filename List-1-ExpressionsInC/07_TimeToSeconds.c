// 7. Faça um programa que leia uma quantidade de horas, minutos e segundos e imprima o total de segundos.

#include <stdio.h>

int main() {
    int hora;
    int minu;
    int segu;
    
    // Solicita um horário (H M S) ao usuário (separados por espaços)
    printf("Digite um horario (H M S): ");
    scanf(" %d %d %d", &hora, &minu, &segu);
    
    // Verifica se há inputs fora do limite
    if (minu >= 60) {

        printf("Numero de minutos maior de 60");
        return 1;

    } else if (segu >= 60) {

        printf("Numero de segundos maior de 60");
        return 1;
    }    
    
    // Calcula e imprime o horário dado em segundos
    printf("\nHorario dado em segundos: %d", (hora * 3600 + minu * 60 + segu));

    return 0;

}