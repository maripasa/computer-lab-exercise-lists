//considere os vetores x e y, ambos de tamanho n, alocados dinamicamente. Dado que a distancia d
//entre dois pontos correspondentes em x e y é dado por d = |xi - yi|
//organize em v os endereços de x e y com menor d

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RAN_LIM 10

int main(){

    int *x, *y, n, d, menor = 0;
    int *v[2];

    printf("Qual o valor de n? (tamanho de x e y): ");
    scanf("%d", &n);

    x = malloc(n * sizeof(int));
    y = malloc(n * sizeof(int));

    if ((x == NULL || y == NULL )) {

        printf("Erro na alocação de memória.");
        return 1;

        }

    srand(time(NULL));

    for( int i = 0 ; i < n ; i++ ) {

        *(x + i) = rand() % RAN_LIM;
        *(y + i) = rand() % RAN_LIM;

        printf("x %d\n", *(x+i));
        printf("y %d\n", *(y+i));

        // se d for negativo, é positivo
        d = (*(x + i) - *(y + i));
        if (d < 0) d = -d;

        printf("d %d\n", d);

        if ( menor == 0 || menor > d ) {
        
        menor = d;
        printf("menor: %d\n", menor);
        v[0] = (x + i);
        printf("v[0] %p\n", (x+i));
        v[1] = (y + i);
        printf("v[1] %p\n\n", (y+i));

        }
    }

    free(x);
    free(y);

    return 0;

}