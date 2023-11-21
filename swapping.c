#include<stdio.h>
void swapNumbers(int *a,int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
int main() {
    int num1,num2;
    printf("Enter the numbers:");
    scanf("%d%d",&num1,&num2);
    printf("\nBefore swapping:num1=%d,num2=%d",num1,num2);
    swapNumbers(&num1,&num2);
    printf("\nAfter Swapping :num1=%d,num2=%d",num1,num2);
} 