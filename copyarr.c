#include<stdio.h>
int firstdigit(int n) {
  while(n>10) {
    n/=10;
  }
  return n ;
}
int main() {
  int n;
  printf("Enter the value of n:");
  scanf("%d",&n);
  printf("The first digit is %d",firstdigit(n));
}