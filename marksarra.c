#include <stdio.h>

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    int marks[numStudents];
    char grades[numStudents];

    for (int i = 0; i < numStudents; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] >= 90) {
            grades[i] = 'A';
        } else if (marks[i] >= 80) {
            grades[i] = 'B';
        } else if (marks[i] >= 70) {
            grades[i] = 'C';
        } else if (marks[i] >= 60) {
            grades[i] = 'D';
        } else {
            grades[i] = 'F';
        }
    }

    printf("\nStudent Grades:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: Marks = %d, Grade = %c\n", i + 1, marks[i], grades[i]);
    }

    return 0;
}
