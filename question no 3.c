#include <stdio.h>

// Function to display numbers between given limits
void display(int limit) {
  // Extract the lower and upper limits from the limit parameter
  int lower_limit = limit / 1000;
  int upper_limit = limit % 1000;

  // Print the numbers between the lower and upper limits
  int i ;
  for ( i = lower_limit; i <= upper_limit; i++) {
    printf("%d ", i);
  }
  printf("\n");
}

int main() {
  int lower_limit, upper_limit;  // Lower and upper limits

  // Read the lower and upper limits from the user
  printf("Enter the lower limit: ");
  scanf("%d", &lower_limit);
  printf("Enter the upper limit: ");
  scanf("%d", &upper_limit);

  // Pack the lower and upper limits into a single integer
  int limit = lower_limit * 1000 + upper_limit;

  // Call the display function
  display(limit);

  return 0;
}

