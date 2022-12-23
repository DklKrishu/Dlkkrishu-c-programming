#include <stdio.h>
#include <string.h>

#define MAX_NAME_LEN 50
#define NUM_STUDENTS 10

typedef struct {
  char name[MAX_NAME_LEN];
  int roll;
  int marks;
} student_t;

void read_student_info(student_t *students) {
	int i;
  for (i = 0; i < NUM_STUDENTS; i++) {
    printf("Enter the name, roll number, and marks for student %d: ", i + 1);
    scanf("%s %d %d", students[i].name, &students[i].roll, &students[i].marks);
  }
}

void display_student_info(student_t *students) {
	int i;
  for (i = 0; i < NUM_STUDENTS; i++) {
    printf("Student %d: %s, Roll number: %d, Marks: %d\n", i + 1, students[i].name, students[i].roll, students[i].marks);
  }
}

int main(void) {
  student_t students[NUM_STUDENTS];

  read_student_info(students);
  display_student_info(students);

  return 0;
}

