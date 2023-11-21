#include<stdio.h>
int main() {
    int k[100],i,n,largest,second_largest;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++) {
        scanf("%d",&k[i]);
    }
    largest = k[0];
    second_largest = k[1];
    for(i=0;i<n;i++) {
        if(k[i]>largest) {
            second_largest = largest;
            largest = k[i];
        }
        else if(k[i]>second_largest||k[i]!=largest) {
            second_largest = k[i];
    }
}
     printf("largest= %d, second_largest= %d",largest,second_largest);
   
}