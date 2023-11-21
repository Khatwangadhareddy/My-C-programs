#include<stdio.h>
#include<stdlib.h>
int main() {
    FILE* fptr;
    char str[50];
    fptr = fopen("filename.txt","w");
    if(fptr == NULL) {
      printf("\nError! File cannot be opened.");
      exit(0);
    }
    printf ("Enter a string: ");
    gets(str);
    fputs(str,fptr);
    fclose(fptr);
}