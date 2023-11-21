#include<stdio.h>
struct student {
  struct DOB {
    int day;
    int month;
    int Year;
  }dob;
  char name[50];
}stud;
int main(){
  char Date[50];
  printf("Enter the Name of the student:");
  scanf("%s",stud.name);
  printf("Enter date in dd/mm/yyyy format:\n");
  printf("Enter the date:");
  scanf("%d",&stud.dob.day);
  printf("Enter the Month:");
  scanf("%d",&stud.dob.month);
  printf("Enter year:");
  scanf("%d",&stud.dob.Year);
  printf("***Details of a student:***\n ");
  printf("Name = %s\n",stud.name);
  sprintf(Date,"%d|%d|%d",stud.dob.day,stud.dob.month,stud.dob.Year);
  puts(Date);
}