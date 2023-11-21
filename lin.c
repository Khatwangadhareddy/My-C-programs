#include<stdio.h>
int main() {
  int n,i,key;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++) {
    printf("Element %d:",i+1);
    scanf("%d",&a[i]);
  }
  printf("Enter the key element:");
  scanf("%d",&key);
  for(i=0;i<n;i++) {
    if(key==a[i]) {
      printf("Searching is Succesful.\n");
      printf("Key is found at index a[%d]",i+1);
      return 0;
    }
  
    
  }
  printf("Searching is Unsuccesful.");
  
}