#include <stdio.h>

float calculateAverage(int grades[], int numStudents) {
    int sum = 0;
    int i;

    for (i = 0; i < numStudents; i++) {
        sum += grades[i];
    }

    return (float)sum / numStudents;
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    int grades[numStudents];
    int i;

    for (i = 0; i < numStudents; i++) {
        printf("Enter the grade for student %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    float average = calculateAverage(grades, numStudents);
    printf("The average grade is: %.2f\n", average);

    return 0;
}
