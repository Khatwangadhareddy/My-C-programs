#include<stdio.h>
int main() {
  char str1[40], str2[40];
  printf("Enter the source string:");
  gets(str2);
  int i=0;
  while(str2[i]!='\0') {
    str1[i]==str2[i];
    i++;
  }
  str1[i]='\0';
  printf("Copied string = %s",str1[i]);
}