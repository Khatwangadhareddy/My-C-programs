#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter the values of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c) {
        printf("a is the largest %d\n",a);
    }
    else if(b>c) {
        printf("b is the largest %d\n",b);
    }
    else {
        printf("c is the largest %d\n",c);
    }


}
