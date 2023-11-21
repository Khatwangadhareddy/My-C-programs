#include<stdio.h>
int main() {
    int add,mult,div,sub;
    int a,b;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    add = a+b;
    mult= a*b;
    div=a/b;
    sub = a-b;
    printf("Addition of two numbers is %d\n",add);
    printf("subtraction of two numbers is %d\n",sub);
    printf("Multiplication of two numbers is %d\n",mult);
    printf("Division of two numbers is %d\n",div);

}