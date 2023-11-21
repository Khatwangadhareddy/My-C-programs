#include <stdio.h>

int main() {
    int n,rev=0,digit,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0) {
        digit = n%10;
        n = n/10;
        rev = digit+10*rev;
        sum = sum +digit;
    }
    printf("Reverse of a integer number = %d\n",rev);
    printf("Sum of a number = %d",sum);
    return 0;
}