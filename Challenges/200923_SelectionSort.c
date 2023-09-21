#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE_ARRAY 6
#define MAX_ARRAY 100
#define MIN_ARRAY 0

void createRandArray(int array[SIZE_ARRAY]);
void showArray(int array[SIZE_ARRAY]);
void sortArray(int array[SIZE_ARRAY]);

int main() {
    int numbers[SIZE_ARRAY];
    
    createRandArray(numbers);
    printf("Randomly generated array:\n");
    showArray(numbers);

    sortArray(numbers);
    printf("\nSorted array:\n");
    showArray(numbers);

    return 0;
}

void createRandArray(int array[SIZE_ARRAY]) {
    srand(time(NULL));

    for (int x = 0; x < SIZE_ARRAY; x++) {
        array[x] = MIN_ARRAY + (rand() % (MAX_ARRAY - MIN_ARRAY + 1));
    }
}

void showArray(int array[SIZE_ARRAY]) {
    for (int x = 0; x < SIZE_ARRAY; x++) {
        printf("%d\n", array[x]);
    }
}

void sortArray(int array[SIZE_ARRAY]) {
    for (int i = 0; i < SIZE_ARRAY - 1; i++) {
        for (int j = i + 1; j < SIZE_ARRAY; j++) {
            if (array[j] < array[i]) {
                // Swap the minimum element with the current element
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    
    }
}