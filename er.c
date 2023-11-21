#include <stdio.h>
#include<stdlib.h>
int main() {
    FILE* fp;
    char filename[50];
    char ch;
    printf("Enter the filename to be opened:\n");
    scanf("%s",filename);
    fp = fopen(filename,"r");
    if(fp == NULL) {
        printf("cannot open file\n");
        exit(0);
    }
    ch = fgetc(fp);
    while(ch!=EOF) {
        printf("%c",ch);
        ch = fgetc(fp);
    }
    fclose(fp);
}