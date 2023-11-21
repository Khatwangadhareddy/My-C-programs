#include<stdio.h>
int main() {
  int n,i,key;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  int arr[n];
  for(i=0; i<n; ++i) {
    printf("Element %d: ",i+1);
    scanf("%d",&arr[i]);
  }
  printf("Enter the key element:");
  scanf("%d",&key);
  for(i=0;i<n;i++) {
  if(key==arr[i]) {
    printf("Searching is Succesfull.\n");
    printf("Key is found at index arr[%d]",i);
    return 0;
  }
  }
   
    printf("Searching is not succesfull.");
  
}