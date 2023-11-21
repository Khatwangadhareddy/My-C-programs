#include<stdio.h>
void swap(int m ,int n);
void main() {
  int a,b;
  printf("Enter the values of a and b:");
  scanf("%d%d",&a,&b);
  printf("Before swapping a = %d\tb=%d",a,b);
  swap(a,b);
  printf("After swapping a = %d\t b = %d",a,b);
}
  void swap(int m , int n ) {
     int temp;
     temp =m;
     m = n;
     n = temp;
  }
