// make an election machine, a electible has 100 as it's code and other 200, anything not those, is null, and 0 closes
// the program

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
        
        if (vote != 0) {
            if (confirmVote(vote)) {
                switch (vote) {
                    case 100:
                        candidateA++;
                        break;

                    case 200:
                        candidateB++;
                        break;

                    default:
                        nulo++;
                }
            }
        } else {
            int total = candidateA + candidateB;

            clearScreen();

            puts("\n==== VOTAÇÃO ENCERRADA ====\n");

            printf("Candidato A: %d %% dos votos\n", ((candidateA * 100) / total));
            printf("Candidato B: %d %% dos votos\n", ((candidateB * 100) / total));

            printf("\nTotal de votos Candidato A: %d\n", candidateA);
            printf("Total de votos Candidato B: %d\n", candidateB);
            printf("Total de votos nulos: %d\n", nulo);
            printf("\nTotal de votos: %d\n", (total + nulo));

            break;
        }
    }

    return 0;
}

void clearScreen() {
    system("clear"); // Utilize "clear" para sistemas Unix-like e "cls" para Windows
}

int confirmVote(int vote) {
    char choice;
    printf("Você votou em %d. Deseja registrar este voto? (S/N): ", vote);
    scanf(" %c", &choice);

    return (choice == 's' || choice == 'S');
}