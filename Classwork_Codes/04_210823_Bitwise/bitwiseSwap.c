#include <stdio.h>

// Declaring auxiliar function
void printBits(size_t const size, void const * const ptr);

int main(){

    unsigned int x = 32;
    unsigned int y = 65;

    // Print x and y
    printf("\nX value: %d \n In binary:", x);
    printBits(sizeof(x), &x);
    printf("\nY value: %d \n In binary: ", y);
    printBits(sizeof(y), &y);

    // SWAP
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    // Print after swap
    puts("\n\nAFTER SWAP");
    printf("\nX value: %d \n In binary:", x);
    printBits(sizeof(x), &x);
    printf("\nY value: %d \n In binary: ", y);
    printBits(sizeof(y), &y);
    puts("\n");

    return 0;

}

// Function
void printBits(size_t const size, void const * const ptr)
{
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;
    
    for (i = size-1; i >= 0; i--) {
        for (j = 7; j >= 0; j--) {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
    }
}

