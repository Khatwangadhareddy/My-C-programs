#include<stdio.h>
int main() {
  int n;
  printf("Enter the value of n:");
  scanf("%d", &n);
  for(int x = 1;x<=n;x++) {
    for(int i=1;i<=10;i++) {
      printf("%d\t",x*i);
      
    }
     printf("\n");
  }
  
}