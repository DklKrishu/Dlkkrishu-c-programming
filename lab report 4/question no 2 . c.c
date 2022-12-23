#include <stdio.h>

int main(void) {
    // Declare an array and a pointer to int
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int target = 3;

    // Iterate through the array and search for the target element
    while (*ptr != '\0') {
        if (*ptr == target) {
            printf("The target element was found at index %ld\n", ptr - arr);
            return 0;
        }
        ptr++;
    }

    printf("The target element was not found in the array\n");

    return 0;
}
