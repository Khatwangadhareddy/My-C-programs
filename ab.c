#include<stdio.h>
int main() {
  char kattu[100];
  int i=0;
  printf("Enter the string:");
  gets(kattu);
  while(kattu[i]!='\0') {
      i++;
  }
  printf("Length of a string =%d",i);
}