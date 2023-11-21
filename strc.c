#include<stdio.h>
int main() {
  struct  student
  {
    /* data */
    int rollno;
    char name[50];
    char DOB[50];
    float fees;
    char srn[50];
  }stud1;
  printf("Enter the Roll Number:\n");
  scanf("%d",&stud1.rollno);
  printf("Enter the Name:\n");
  scanf("%s",stud1.name);
  printf("Enter the Date of birth:\n");
  scanf("%s",stud1.DOB);
  printf("Enter the Fees:\n");
  scanf("%f",&stud1.fees);
  printf("Enter the srn:\n");
  scanf("%s",stud1.srn);
  printf("***Details of a student***\n");
  printf("Roll Number = %d\n",stud1.rollno);
  printf("Name = %s\n",stud1.name);
  printf("DOB = %s\n",stud1.DOB);
  printf("Fees = %.2f\n",stud1.fees);
  printf("Srn = %s",stud1.srn);
}