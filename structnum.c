#include<stdio.h>
int main() {
  struct  numbers
  {
    /* data */
    int a1,a2,a3;
    int largest;
  }num;
  printf("Enter the Numbers:\n");
  scanf("%d%d%d",&num.a1,&num.a2,&num.a3);
  if(num.a1>= num.a2 && num.a1 >= num.a3)
  num.largest = num.a1;
  else if(num.a2>num.a3)
  num.largest=num.a2 ;
  else 
  num.largest = num.a3;
  printf("Largest number = %d",num.largest);
  
}