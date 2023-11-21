#include<stdio.h>
int main() {
  char str1[20];
  char str2[20];
  printf("Enter a string:");
  gets(str1);
  printf("Enter a string:");
  gets(str2);
  int i =0 ,difference;
  while(str1[i]==str2[i]) {
    if (str1[i]=='\0')
    break ;  
    else 
    i++;
}
difference  = str1[i] - str2[i];
if(difference==0)
  printf("%s is equal to %s",str1,str2);
else if(difference>0) 
  printf("%s is greater than %s\n",str1,str2);
else 
  printf("%s is lesser than %s \n",str1,str2);
}