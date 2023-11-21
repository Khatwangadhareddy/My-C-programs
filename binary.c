#include<stdio.h>
int main() {
    int a[100],i,n,key,low,high,mid;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    
    for(i=0; i<n; i++) {
        printf("Element %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the key element: ");
    scanf("%d",&key);
    low = 0;
    high = n-1;
    while(low<=high) {
        mid = (low+high)/2;
        if(key==a[mid]) {
            printf("Searching is successful.\n");
            printf("Key is found at index a[%d]\n",mid);
            return 0;
        }
        else if(key>a[mid]) 
            low = mid+1;
        
        else 
            high = mid-1;
            
        
    }
    printf("Searching is unsuccessful");
    return 0;
}