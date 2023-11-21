#include<stdio.h>
int main () {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int sum = 0;
    while (n!=0) {
      
        sum += n;
        printf("%d",sum);
    }
    
}

