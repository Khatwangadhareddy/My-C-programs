#include<stdio.h>
int main() {
  int a,b,res;
  char op;
  printf("Enter the Operator:");
  scanf("%c",&op);
  printf("Enter the Two Numbers:");
  scanf("%d%d",&a,&b);
  switch(op) {
    case '+':res = a+b;
    printf("%d %c %d=%d",a,op,b,res);
    break;
    case '-':res = a-b;
    printf("%d %c %d=%d",a,op,b,res);
    break;
    case '*':res = a*b;
    printf("%d %c %d=%d",a,op,b,res);
    break;
    case '/':if(b!=0) {
      res = a/b;
      printf("%d %c %d=%d",a,op,b,res);
      break;
    }
    else {
      printf("Error:Division by Zero.");
      break;
    }
    default :printf("\nInvalid operator");
    break;
  }
}