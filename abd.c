#include<stdio.h>
int main()  {
  int n,i,low,mid,high,key;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++) {
    printf("Element %d:",i+1);
    scanf("%d",&arr[i]);
  }
  printf("Enter the key value:");
  scanf("%d",&key);
  low = 0;
  high = n-1;
  while(low<=high) {
    mid = (low+high)/2;
      if(key==arr[mid]) {
      printf("Searching is successful.\n");
      printf("Key is found at index[%d]",mid);
      return 0;
    }
    else if(key>arr[mid]) 
      low = mid+1;
    else 
      high = mid-1;
    }
  
  printf("Searching is not successful.");
}