#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	while (1) {
	srand(time(NULL));
	int num = rand() % 2;
	printf("%d", num);
}}
