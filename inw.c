#include <stdio.h>

int main() {
    int numstudents,i;
    printf("Enter the number of students:");
    scanf("%d",&numstudents);
    int marks[numstudents];
    char grades[numstudents];
    for(i=0;i<numstudents;i++) {
        printf("Enter the marks for student %d:",i+1);
        scanf("%d",&marks[i]);
    
    if(marks[i]<=39) {
        grades[i] = 'F';
    }
    else if(marks[i]<=49) {
        grades[i] = 'E';
    }
    else if(marks[i]<=59) {
        grades[i] = 'D';
    }
    else if(marks[i]<=69) {
        grades[i] = 'C';
    }
     else if(marks[i]<=79) {
        grades[i] = 'B';
    }
    else {
        grades[i] = 'A';
    }
}
    for( i=0;i<numstudents;i++) {
        printf("Student %d:Marks = %d, Grades = %c\n",i+1,marks[i],grades[i]);
    }
    
    
}


