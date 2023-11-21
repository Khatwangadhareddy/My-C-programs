#include<stdio.h>
int main() {
    char a[5],i;
    printf("size of the char in this compiler is %lu\n",sizeof(char));
    for(i=0;i<5;i++) {
        printf("Addres of a[%c] is %p\n",i,&a[i]);

    }
}