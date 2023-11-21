#include<stdio.h>
int main() {
  int i,n;
  printf("Enter the size:");
  scanf("%d",&n);
  printf("Transaction ID's:");
  for(i=1;i<=n;i++) {
    printf("%d\t",i);
   
  }
  int sum = 0;
  for(i=1;i<=n;i++) {
    sum+=i;
  }
   printf("\n");
  printf("Sum = %d\n",sum);
}