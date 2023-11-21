#include<stdio.h>
int main() {
  FILE* kattu;
  kattu = fopen("Filename.txt","w");
  fputs("My name is kattu.\n",kattu);
  fputs("I thought love is a waste of time.",kattu);
  fclose(kattu);
}