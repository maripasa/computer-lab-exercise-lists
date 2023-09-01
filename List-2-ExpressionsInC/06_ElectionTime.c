#include <stdio.h>
#include <stdlib.h> // Para a função system()

void clearScreen();
int confirmVote(int vote);

int main() {
    int vote;
    int candidateA = 0;
    int candidateB = 0;
    int nulo = 0;

    while (1) {
        clearScreen();

        puts("\nInsira o numero do candidato:");
        scanf("%d", &vote);
        
        if (vote >= 0) {
    	if (confirmVote(vote)) {
               	switch (vote) {
               		case 5:
                       		candidateA++;
               			break;
        		case 7:
                        	candidateB++;
                        	break;
                   	default:
                       		nulo++;
                }
            }

        } else {
            int total = candidateA + candidateB + nulo;

            clearScreen();

            puts("\n==== VOTAÇÃO ENCERRADA ====\n");

            printf("Paulo: %d %% dos votos\n", ((candidateA * 100) / total));
            printf("Renata: %d %% dos votos\n", ((candidateB * 100) / total));

            printf("\nTotal de votos Paulo: %d\n", candidateA);
            printf("Total de votos Renata: %d\n", candidateB);
            printf("Total de votos nulos: %d\n", nulo);
            printf("\nTotal de votos: %d\n", total);

            break;
        }
    }

    return 0;
}

void clearScreen() {
    system("clear");
}

int confirmVote(int vote) {

    	char choice;
   	printf("Você votou em %d\n\n", vote);
       	switch (vote) {
		case 5:	
			puts("5 - Paulo");
			break;
		case 7:
			puts("7 - Renata");
			break;
		default:
			puts("Nulo");
	}
	puts("Deseja registrar este voto? (S/N): ");
   	scanf(" %c", &choice);

    return (choice == 's' || choice == 'S');
}
