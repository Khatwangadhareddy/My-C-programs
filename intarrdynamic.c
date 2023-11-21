#include<stdio.h>
#include<stdlib.h>
int main() {
  int *arr;
  int n;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  arr = (int*)malloc(n*sizeof(int)); 
  if(arr==NULL) {
    printf("Memory allocation failed.Exiting....");
    return 1;
  }
  for(int i=0;i<n;i++) {
    arr[i] = i + 1;
  }
  for(int i=0;i<n;i++) {
    printf("Element at index %d:%d\n",i,arr[i]);
  }
  free(arr);
}