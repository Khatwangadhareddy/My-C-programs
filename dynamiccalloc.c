#include<stdio.h>
#include<stdlib.h>
int main() {
  int n;
  char *charArray;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  charArray = (char*)malloc(sizeof(char)*n);
  if (!charArray) {
    printf("Memory allocation failed.Exiting...");
    return -1;
  }
  for (int i=0;i<n;i++) {
    charArray[i] = 'A'+i;
  }
  printf("Initialized character array:");
  for(int i=0;i<n;i++) {
    printf("%c ",charArray[i]);
  }
  free(charArray);
}