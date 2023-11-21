#include<stdio.h>
int main() {
  int p,count;
  float si,n,r;
  for(count=1;count<=3;count++) {
    printf("Enter the value of p , n and r:");
    scanf("%d %f %f",&p,&n,&r);
    si = p*n*r/100;
    printf("simple interest = %.2f",si);
  }
}