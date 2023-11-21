#include<stdio.h>
int main() {
  int a[10][10],b[10][10],res[10][10],i,j,m,n,p,q;
  printf("Enter the dimensions of matrix A: ");
  scanf("%d%d",&m,&n);
  printf("Enter the dimensions of matrix B:");
  scanf("%d%d",&p,&q);
  if(m==p&&n==q) {
    printf("Enter the elements of matrix A:");
    for ( i = 0 ; i < m ; ++i ) {
      for(j=0;j<n;j++) {
        scanf("%d", &a[i][j]);
      }
    }
    printf("Enter the elements of matrix B:");
    for(i=0;i<p;i++) {
      for(j=0;j<q;j++) {
        scanf("%d", &b[i][j]);
      }
    }
    for(i=0;i<m;i++) {
      for(j=0;j<n;j++) {
        res[i][j]=a[i][j]+b[i][j];
      }
      
    }
    for(i=0;i<m;i++) {
      for(j=0;j<n;j++) {
        printf("%d\t",res[i][j]);
      }
    }
  }
  else {
    printf("The matrices cannot be added as they are not compatible.");
  }
}