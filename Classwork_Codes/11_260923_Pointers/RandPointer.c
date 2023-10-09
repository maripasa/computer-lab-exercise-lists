#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define RAN_AM 11

int main(){

	srand(time(NULL));

	int v[SIZE];

	for ( int x = 0 ; x < SIZE ; x++ ) v[x] = rand() % RAN_AM;

	for ( int x = 0 ; x < SIZE ; x++ ) printf("%d: [%p]\n",v[x] , &v[x]);

return 0;

}
