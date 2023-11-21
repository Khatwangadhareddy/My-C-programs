#include<stdio.h>
int main() {
    int a[10],b[10],i,n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the Elements of array A:");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
       
    }
    for(i=0;i<n;i++) {
        printf("%d\n",a[i]);
    }
    for(i=0;i<n;i++) {
        b[n-1-i] = a[i];
    }
    printf("Reverse array is:");
    for(i=0;i<n;i++) {
        printf("%d\n",b[i]);

    }
}