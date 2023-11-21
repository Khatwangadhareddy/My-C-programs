#include<stdio.h>
int main() {
  struct complex {
    int real;
    int imag;
  }c1,c2,sum_c,sub_c,mult_c;
  printf("Enter the first complex numbers:");
  scanf("%d%d",&c1.real,&c1.imag);
  printf("Enter the second complex numbers:");
  scanf("%d%d",&c2.real,&c2.imag);
  printf("First complex number = %d+i%d\n",c1.real,c1.imag);
  printf("Second complex number = %d+i%d\n",c2.real,c2.imag);
  sum_c.real = c1.real+c2.real;
  sum_c.imag = c1.imag+c2.imag;
  printf("Sum of two complex numbers = %d+i%d\n",sum_c.real+sum_c.imag);
  sub_c.real =c1.real - c2.real;
  sub_c.imag = c1.imag - c2.imag;
  printf("Subtraction of two complex numbers = %d+i%d\n",sub_c.real,sub_c.imag);
  mult_c.real = c1.real*c2.real - c1.imag*c2.imag;
  mult_c.imag = c1.imag*c2.real+c1.real*c2.imag;
  printf("Multiplication of two compex numbers=%d+i%d\n",mult_c.real,mult_c.imag);
  
}