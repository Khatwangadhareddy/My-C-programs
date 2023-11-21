#include<stdio.h>
int main() {
    int row,col,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (row = 0;row<=n;row++) {
        for(col =row;col<=n;col++) {
            printf("* ");
        }
        printf("\n");
    }
}