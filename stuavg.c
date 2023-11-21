#include<stdio.h>
int main() {
  int n , i,sum = 0;
  float average;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  int marks[n];
  for(i=0;i<n;i++) {
    printf("Enter the marks of student[%d]:",i+1);
    scanf("%d",&marks[i]);
    sum += marks[i];
  }
  
    average = sum/n;
  
  printf("Average = %.2f",average);
  return 0;
  
}