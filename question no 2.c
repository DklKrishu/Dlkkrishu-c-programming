#include <stdio.h>

#define NUM_EMPLOYEES 10  // Number of employees

// Structure definition for employee
struct employee {
  char name[50];  // Name of the employee
  char post[50];  // Post of the employee
  int salary;  // Salary of the employee
};

// Function to filter employee records
struct employee filter_employee_records(struct employee e[]) {
  struct employee filtered_records[NUM_EMPLOYEES];  // Array to store filtered records
  int count = 0;  // Count of filtered records

  // Iterate through the employee records and filter out those whose salary is greater than 10,000
  int i ;
  for ( i = 0; i < NUM_EMPLOYEES; i++) {
    if (e[i].salary > 10000) {
      filtered_records[count] = e[i];
      count++;
    }
  }

  // Return the filtered records
  return filtered_records;
}

int main() {
  struct employee employees[NUM_EMPLOYEES];  // Array of employees

  // Read the name, post, and salary of employees
  for (int i = 0; i < NUM_EMPLOYEES; i++) {
    printf("Enter the name of employee %d: ", i + 1);
    scanf("%s", employees[i].name);
    printf("Enter the post of employee %d: ", i + 1);
    scanf("%s", employees[i].post);
    printf("Enter the salary of employee %d: ", i + 1);
    scanf("%d", &employees[i].salary);
  }

  // Filter the employee records
  struct employee filtered_records = filter_employee_records(employees);

  // Display the filtered records
  for (int i = 0; i < NUM_EMPLOYEES; i++) {
    if (filtered_records[i].salary > 0) {
      printf("Name: %s\n", filtered_records[i].name);
      printf("Post: %s\n", filtered_records[i].post);
      printf("Salary: %d\n", filtered_records[i].salary);
      printf("\n");
    }
  }

  return 0;
}
