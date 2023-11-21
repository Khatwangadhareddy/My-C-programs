#include<stdio.h>
int main() {
  char str1[50],str2[50];
  printf("Enter the first string:");
  scanf("%s",str1);
  printf("Enter the second string:");
  scanf("%s",str2);
  int i=0,difference;
  while(str1[i]==str2[i]) {
    if(str1[i]=='\0') 
      break;
      else 
        i++;
  }
  difference = str1[i] - str2[i];
  if(difference==0) {
    printf("%s is equal to %s",str1,str2);
  }
  else if(difference>0) {
    printf("%s is greater than %s",str1,str2);
  }
  else 
    printf("%s is lesser than %s",str1,str2); 
}