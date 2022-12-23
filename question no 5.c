#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    char name[50];
    int salary;
    int hours;
};

void print_highest_salary(struct Employee *employees, int n) {
    int highest_salary = 0;
    char highest_salary_name[50] = "";

    for (int i = 0; i < n; i++) {
        if (employees[i].salary > highest_salary) {
            highest_salary = employees[i].salary;
            strcpy(highest_salary_name, employees[i].name);
        }
    }

    printf("Highest salary: %d (earned by %s)\n", highest_salary, highest_salary_name);
}

int main(void) {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Dynamically allocate an array of structures
    struct Employee *employees = malloc(n * sizeof(struct Employee));

    // Initialize the fields of each employee
    for (int i = 0; i < n; i++) {
        printf("Enter the name of employee %d: ", i + 1);
        scanf("%s", employees[i].name);

        printf("Enter the salary of employee %d: ", i + 1);
        scanf("%d", &employees[i].salary);

        printf("Enter the hours of work per day for employee %d: ", i + 1);
        scanf("%d", &employees[i].hours);
    }

    // Print the highest salary
    print_highest_salary(employees, n);

    // Free the dynamically allocated memory
    free(employees);

    return 0;
}

