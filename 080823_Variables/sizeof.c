//Variables code: Sizeof and identifiers 

#include <stdio.h>

int main(){
    long int x = 10;
    long long int y;
    float f = 0;
    double d = 0;
    char c = 0;

    printf("Digite um valor: \n");
    scanf("%d", &y);
    printf("O valor de y é: %d\n", y);

    puts("==========");

    printf("Qnt de bytes de x (int) : %lu\n", sizeof(x));
    printf("Qnt de bytes de y (int) : %lu\n", sizeof(y));
    printf("Qnt de bytes de f (float) : %lu\n", sizeof(f));
    printf("Qnt de bytes de d (double) : %lu\n", sizeof(d));
    printf("Qnt de bytes de c (char) : %lu\n", sizeof(c));

    return 0;
}