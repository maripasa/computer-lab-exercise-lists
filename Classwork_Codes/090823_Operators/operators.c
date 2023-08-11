#include <stdio.h>

int main(){
    int x = 10;

    // x = x + 1; // x++; // x+=1

    puts("==== Incremento após a variável ====");

    printf("x = %d\n", x++);

    printf("x = %d\n", x++);

    printf("x = %d\n", x);

    puts("==== Incremento após a variável ====");
    x++;
    printf("x = %d\n", x);
    x++;
    printf("x = %d\n", x);
    x++;
    printf("x = %d\n", x);

    return 0;
}