#include<stdio.h>
struct book
{
  int bookid;
  char bookname[300];
  char author[20];
  float price;
  int year;
  int pages;
  char publisher[20];

}b1,b2,b3;
int main() {
  struct book b1;
  printf("Enter the book id:");
  scanf("%d",&b1.bookid);
  printf("Enter the book name:");
  scanf("%s",b1.bookname);
  printf("Enter the price:");
  scanf("%f",&b1.price);
  printf("Enter the Year:");
  scanf("%d",&b1.year);
  printf("Enter the total no of pages:");
  scanf("%d",&b1.pages);
  printf("%d %s %f %d %d",b1.bookid,b1.bookname,b1.price,b1.year,b1.pages);
}
