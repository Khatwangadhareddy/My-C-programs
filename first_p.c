#include<stdio.h>
int main() {
  int a= 30;
  int *ptr = &a;
  printf("Value of a = %d\n",a);
  printf("Value of ptr = %d\n",*ptr);
  printf("Address of a = %p\n",&a);
  printf("Adress of ptr = %p",ptr);
}