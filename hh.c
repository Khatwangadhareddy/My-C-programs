#include<stdio.h>
#include<stdlib.h>
int main() {
  FILE* fp;
  int n;
  fp = fopen("emp.txt", "w");
  if(fp==NULL) {
    printf("\nError in opening file\n");
  }
  printf("Enter the Integer:\n");
  scanf("%d",&n);
  fprintf(fp,"%d",n);
  fclose(fp);
  fp = fopen("emp.txt","r");
  fscanf(fp,"%d",&n);
  printf("Integer=%d",n);
}