#include<stdio.h>
int main() {
  int arr[20],i,n,temp;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  for(i=0;i<n;i++) {
    printf("Element %d:",i+1);
    scanf("%d",&arr[i]);
  }
  printf("Elements before sorting.\n");
  for(i=0;i<n;i++) {
    printf("%d\n",arr[i]);
  }
  for(i=0;i<n;i++) {
    for(int j=i+1;j<n;j++) {
      if(arr[j]<arr[i]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;  
      }
    }
  }
  printf("Elements after sorted.\n");
  for(i=0;i<n;i++) {
    printf("%d\n",arr[i]);33
  }
}