#include<stdio.h>
int main() {
  int n,fact;
  printf("Enter the value of n:");
  scanf("%d",&n);
  fact = 1;
  while(n>0) {
    fact = fact * n;
    n--;
  }
  
  printf("The factorial of a number is %d",fact);
}