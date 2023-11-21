#include<stdio.h>
int main() {
  int n,i;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++) {
    printf("Element %d:",i+1);
    scanf("%d",&arr[i]);
    
  }
  int *ptr;
  ptr =arr+2;
  printf("%d %d %d %d",arr[0],*(arr+0),*(ptr+0),ptr[0]);
}