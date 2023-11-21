#include<stdio.h>
int main() {
   int a,b,c;
   printf("enter the value of the a ,b ,c:");
   scanf("%d%d%d",&a,&b,&c);
   if((a<b)&&(a<c)) {
    printf("%d is the smallest ",a);
    if((b<a)&&(b<c)) {
        printf("%d is the smallest",b);

    }
    if((c<a)&&(c<b)) {
        printf("%d is the smallest",c);
   }

}
}