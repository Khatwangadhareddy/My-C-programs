#include<stdio.h>
int main() {
    int i,j,temp;
    int k[10] = {34,5,64,23,45,78,12,567,64,3};
    for(i=0;i<10;i++) {
        for(j=i+1;j<10;j++) {
            if(k[j]>k[i]) {
                temp = k[i];
                k[i] = k[j];
                k[j] = temp;
            }
        }
    }
    printf("sorted array\n");
    for(i=0;i<10;i++) {
        printf("%d\t",k[i]);
    }

}