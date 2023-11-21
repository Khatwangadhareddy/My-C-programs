#include <stdio.h>

int main() {
    int i,j,n,temp;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        printf("Element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(arr[j]<arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array after sorting is:\n");
    for(i=0;i<n;i++) {
        printf("%d\n",arr[i]);
    }

    return 0;
}