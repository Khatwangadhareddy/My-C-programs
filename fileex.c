#include<stdio.h>
int main() {
  FILE *fp;
  fp = fopen("file1.txt","w");
  fprintf(fp,"We have opened the file in write mode.");
  fclose(fp);


}