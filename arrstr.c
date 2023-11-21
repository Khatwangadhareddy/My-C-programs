#include<stdio.h>
int main() {
  struct student {
    int roll_no;
    char name[50];
    char course[50];
    float fees;
  };
  struct student stud[60];
  int n,i;
  printf("Ente the no of students:\n");
  scanf("%d",&n);
  for(i=0;i<n;i++) {
    printf("Enter the roll number:\n");
    scanf("%d",&stud[i].roll_no);
    printf("Enter the name\n");
    scanf("%s",stud[i].name);
    printf("Enter the course\n");
    scanf("%s",stud[i].course);
    printf("Enter the fees\n");
    scanf("%f",&stud[i].fees);
  }
  for(i=0;i<n;i++) {
    printf("Student Details\n",i+1);
    printf("Name = %s\n",stud[i].name);
    printf("Roll NUmber = %d\n",stud[i].roll_no);
    printf("Course = %s\n",stud[i].course);
    printf("Fees = %f",stud[i].fees);
  }
}