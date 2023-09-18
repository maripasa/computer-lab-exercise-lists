#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QNT_LOCKERS 8

// Declaration of functions
void showLockers(unsigned char lockerList);
unsigned char occupyLocker(unsigned char lockerList);
unsigned char emptyLocker(unsigned char lockerList);
int areAllLockersFull(unsigned char lockerList);

int main() {

	unsigned char lockers = 0;
	int option;

	// Seed creation
	srand(time(NULL));

	// Main loop
	while (1) {
		
		showLockers(lockers);
		
		// Main Input
		printf("\nO que deseja fazer agora:\n1. Ocupar armário\n2. Esvaziar armário\n3. Sair\n> ");
		scanf("%d", &option);

		switch (option) {
			case 1:
				lockers = occupyLocker(lockers);
				break;

			case 2:
				lockers = emptyLocker(lockers);
				break;	

			case 3:
				puts("Programa Encerrado");
				exit(0);

			default:

				// Error Handling
				puts("Insira um valor válido (1, 2 ou 3)");
				break;
		}	
	}	
	return 0;
}

int areAllLockersFull(unsigned char lockerList) {
    return lockerList == ((1 << QNT_LOCKERS) - 1);
}

void showLockers(unsigned char lockerList) {
	puts("-----------------------------------");
	puts("Status dos armários: ");

	// Checks all lockers for status
	for (int x = 0; x < QNT_LOCKERS; x++) {
		if (lockerList & (1 << x)){
			printf("%d - Ocupado\n", x);
		} else printf("%d - Vazio\n", x);	
	}

	// Output for full or empty conditions
	if (areAllLockersFull(lockerList)) puts("OBS: Todos os armários estão cheios");

	if (lockerList == 0) {
		puts("OBS: Todos os armários estão vazios");
	}
}

unsigned char occupyLocker(unsigned char lockerList) {

	int locker;
	
	// Checks if unnable to occupy
	if (areAllLockersFull(lockerList)){
		puts("\nTodos os armários estão cheios");
		return lockerList;
	}

	// Random Occupy
	do {
		locker = rand() % 8;
	} while (lockerList & (1 << locker));

	// Occupies
	lockerList |= (1 << locker);
	printf("\nO armário %d foi ocupado\n", locker);
	return lockerList;	
}

unsigned char emptyLocker(unsigned char lockerList) {
	
	// Checks if unable to empty
	if (lockerList == 0) {
		puts("\nTodos os armários já estão vazios");
		return lockerList;
	}

	int locker;
	
	// Empty Loop
	while (1) {
		printf("Qual armário quer desocupar?\n(1-8). Escolher\n> ");
		scanf("%d", &locker);

		// Input Error Handling
		if ((locker <= 0) || (locker > QNT_LOCKERS)) {	
			puts("\nValor inválido.");
			continue;
		}

		// Checks: if full empties, if not, does not empty
		if ((lockerList & (1 << (locker - 1))) != 0) {
			lockerList ^= (1 << (locker - 1));
			printf("\nArmário %d esvaziado.\n", locker);
			return lockerList;

		} else {
			printf("\nArmário %d já vazio\n", locker);
			return lockerList;
		}	
	}
	return lockerList;
}