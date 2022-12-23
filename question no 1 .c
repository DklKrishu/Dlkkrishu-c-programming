#include <stdio.h>

#define NUM_STUDENTS 10  // Number of students

// Structure definition for student
struct student {
  char name[50];  // Name of the student
  int roll_number;  // Roll number of the student
  int marks;  // Marks scored by the student
};

// Function to read information of students
void read_students(struct student s[]) {
	int i ;
  for (i = 0; i < NUM_STUDENTS; i++) {
    printf("Enter the name of student %d: ", i + 1);
    scanf("%s", s[i].name);
    printf("Enter the roll number of student %d: ", i + 1);
    scanf("%d", &s[i].roll_number);
    printf("Enter the marks of student %d: ", i + 1);
    scanf("%d", &s[i].marks);
  }
}

// Function to display the information of students
void display_students(struct student s[]) {
	int i ;
  for ( i = 0; i < NUM_STUDENTS; i++) {
    printf("Name: %s\n", s[i].name);
    printf("Roll number: %d\n", s[i].roll_number);
    printf("Marks: %d\n", s[i].marks);
    printf("\n");
  }
}

int main() {
  struct student students[NUM_STUDENTS];  // Array of students

  // Read the information of students
  read_students(students);

  // Display the information of students
  display_students(students);

  return 0;
}
