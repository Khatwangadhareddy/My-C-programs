#include<stdio.h>
struct number {
    int a,b,c;
    int largest;
}num;
int main() {
  printf("Enter the three numbers:");
  scanf("%d%d%d",&num.a,&num.b,&num.c);
  if(num.a>num.b&&num.a>num.b) {
    num.largest = num.a;
  }
  else if(num.b>num.c) {
    num.largest = num.b;

  }
  else {
    num.largest = num.c;
    printf("Largest number = %d",num.largest);
  }
}

