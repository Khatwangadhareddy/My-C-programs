#include<stdio.h>
#include<stdlib.h>
int main() {
  int i,n;
  int *ptr;
  printf("Enter the no of elements:");
  scanf("%d",&n);
  ptr = (int*)malloc(n*sizeof(int));
  if(ptr==NULL) {
    printf("Memory not allocated.");
    exit(0);
  }
  else {
    printf("Memory allocated successfully.");
    for(i=0;i<n;i++) {
      ptr[i] = i+1;
    }
  
  printf("The array elements are:");
  for(i=0;i<n;i++) {
    printf("%d\n",ptr[i]);
  }
  }
}