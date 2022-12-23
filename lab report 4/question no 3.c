#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Create memory for an int, a char, and a float
    int *int_ptr = malloc(sizeof(int));
    char *char_ptr = malloc(sizeof(char));
    float *float_ptr = malloc(sizeof(float));

    // Check if memory was successfully allocated
    if (int_ptr == NULL || char_ptr == NULL || float_ptr == NULL) {
        printf("Error allocating memory\n");
        return 1;
    }

    // Initialize the variables and print them
    *int_ptr = 123;
    *char_ptr = 'A';
    *float_ptr = 3.14;
    printf("int: %d, char: %c, float: %f\n", *int_ptr, *char_ptr, *float_ptr);

    // Free the allocated memory
    free(int_ptr);
    free(char_ptr);
    free(float_ptr);

    return 0;
}
