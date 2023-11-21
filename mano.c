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
  if(arr[0]>80) {
    printf("A grade.");
  }
  else if(arr[4]>70) {
    printf("B grade.");
  }
  else if(arr[2]>60) {
    printf("C grade.");
  }
  else {
    printf("F grade.");
  }
}