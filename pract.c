#include<stdio.h>
int main() {
    int i,n,size;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        printf("Element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Ente the no of transactions :\n");
    scanf("%d",&size);
    for(i=0;i<size;i++) {
        printf("%d",arr[i]);
    }
}