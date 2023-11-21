#include <stdio.h>

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    int marks[numStudents];  // Declare an array to hold marks
    int sum = 0;

    // Input marks for each student
    for (int i = 0; i < numStudents; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    // Calculate and display the average marks
    float average = (float)sum / numStudents;
    printf("Average marks: %.2f\n", average);

    // Display individual student marks
    printf("Student Marks:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
