#include<stdio.h>
void bubbleSort(int arr[],int n) {
  for(int i=0;i<n;i++) {
    for(int j=i+1;j<n;j++) {
      if(arr[j]<arr[i]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}
int main() {
  int n;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++) {
    printf("Element %d:",i+1);
    scanf("%d",&arr[i]);
  }
  bubbleSort(arr,n);
  printf("Sorted array:\n");
  for(int i=0;i<n;i++) {
    printf("%d\t",arr[i]);
  }
  
}