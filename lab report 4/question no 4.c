#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Declare a pointer to int and allocate memory for 5 elements
    int *arr = malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Error allocating memory\n");
        return 1;
    }

    // Resize the array to 10 elements
    arr = realloc(arr, 10 * sizeof(int));
    if (arr == NULL) {
        printf("Error allocating memory\n");
        return 1;
    }

    // Initialize the array with some values
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    arr[5] = 60;
    arr[6] = 70;
    arr[7] = 80;
    arr[8] = 90;
    arr[9] = 100;

    // Find the maximum element in the array
    int max = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The maximum element in the array is %d\n", max);

    // Free the allocated memory
    free(arr);

    return 0;
}
