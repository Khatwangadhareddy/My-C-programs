#include<stdio.h>
int main() {
    int a[100],i,n,key;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements %d: ",n);
    for(i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter the key element: ");
    scanf("%d",&key);
    for(i=0; i<n; i++) {
        if(a[i]==key){
            printf("search is successful\n");
            printf("Key is found at %d\n",i+1);
            return 0;
        }
        
        }
        printf("Search is unsuccessful");
    }


 

    
