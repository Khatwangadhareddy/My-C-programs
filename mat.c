#include<stdio.h>
int main() {
  int a[10][10],b[10][10],res[10][10],i,j,k,m,n,p,q;
  printf("Enter the order of matrix A:");
  scanf("%d%d",&m,&n);
  printf("Enter the order of matrix B:");
  scanf("%d%d",&p,&q);
  if(n==p) {
    printf("Enter the elements for matrix A:\n");
    for(i=0;i<m;i++) {
      for(j=0;j<n;j++) {
        scanf("%d",&a[i][j]);
      }
    }
    printf("Enter the Elements for matrix B:\n");
    for(i=0;i<p;i++) {
      for(j=0;j<q;j++) {
        scanf("%d",&b[i][j]);
      }
    }
    for(i=0;i<m;i++) {
      for(j=0;j<q;j++) {
        res[i][j] = 0;
      
      for(k=0;k<n;k++) {
        res[i][j] +=a[i][k]*b[k][j];
      }
    }
    }
    printf("Resultant Matrix:\n");
    for(i=0;i<m;i++) {
      for(j=0;j<q;j++) {
        printf("%d\t",res[i][j]);
      }
        printf("\n");   
    }


  }
  else {
    printf("Matrix Multiplication is not possible.");
  }
}




