#include <stdio.h>

int main(void) {
    // Declare an array and a pointer to int
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int sum = 0;

    // Iterate through the array and add each element to the sum
    while (*ptr != '\0') {
        sum += *ptr;
        ptr++;
    }

    printf("The sum of the array is %d\n", sum);

    return 0;
}
