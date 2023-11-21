#include<stdio.h>
int main() {
  struct NAME {
    char firstname[40];
    char middlename[50];
    char lastname [35] ;
  };
  struct  DOB
  {
    int day;
    int month;
    int year;
  };
  struct student
  {
    int rollno;
    struct NAME name;
    float fees;
    struct DOB date;   
  }stud1;
  printf("Memory occupied by the structure NAME = %d\n",sizeof(stud1));
  printf("Enter the rollno:\n");
  scanf("%d",&stud1.rollno);
  printf("Enter the student name:\n");
  scanf("%s%s%s",stud1.name.firstname,stud1.name.middlename,stud1.name.lastname);
  printf("Enter the date of birth:\n");
  scanf("%d%d%d",&stud1.date.day,&stud1.date.month,&stud1.date.year);
  printf("Enter the fees:\n");
  scanf("%f",&stud1.fees);
  printf("***Details of a student***\n");
  printf("Roll Number = %d\n",stud1.rollno);
  printf("Name = %s %s %s\n",stud1.name.firstname,stud1.name.middlename,stud1.name.lastname);
  printf("Date of Birth = %d-%d-%d",stud1.date.day,stud1.date.month,stud1.date.year);
  printf("Fees = %.2f",stud1.fees);
}