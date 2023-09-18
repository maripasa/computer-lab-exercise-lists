#include <stdio.h>

void test(int numer) {
	numer = numer + 1;
}

int main() {

	int num = 5;
	test(num);
	printf("%d", num);
}
