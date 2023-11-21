#include<stdio.h>
int main() {
    int k[30],i,n,largest;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++) {
        scanf("%d",&k[i]);
    }
    largest = k[0];
    for(i=0;i<n;i++) {
        if(k[i]>largest) {
            largest = k[i];
        }
    }
    printf("Largest element = %d\n",largest);
}