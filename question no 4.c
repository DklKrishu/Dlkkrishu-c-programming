#include <stdio.h>

// Structure definition for student_info
struct student_info {
  char name[50];  // Name of the student
  int age;  // Age of the student
  char dob[50];  // Date of birth of the student
};

// Structure definition for Student
struct Student {
  int roll_no;  // Roll number of the student
  int marks;  // Marks scored by the student
  struct student_info info;  // Information of the student
};

int main() {
  struct Student students[3];  // Array of students

  // Read the information of students
  int i ;
  for ( i = 0; i < 3; i++) {
    printf("Enter the roll number of student %d: ", i + 1);
    scanf("%d", &students[i].roll_no);
    printf("Enter the marks of student %d: ", i + 1);
    scanf("%d", &students[i].marks);
    printf("Enter the name of student %d: ", i + 1);
    scanf("%s", students[i].info.name);
    printf("Enter the age of student %d: ", i + 1);
    scanf("%d", &students[i].info.age);
    printf("Enter the date of birth of student %d: ", i + 1);
    scanf("%s", students[i].info.dob);
  }

  // Display the information of students
  for ( i = 0; i < 3; i++) {
    printf("Roll number: %d\n", students[i].roll_no);
    printf("Marks: %d\n", students[i].marks);
    printf("Name: %s\n", students[i].info.name);
    printf("Age: %d\n", students[i].info.age);
    printf("Date of birth: %s\n", students[i].info.dob);
    printf("\n");
  }

  return 0;
}

