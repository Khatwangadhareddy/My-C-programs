#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main() {
    int a,b,c;
    float r1,r2,rp,ip,disc;
    printf("Enter the Coeffecients of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==0) {
        printf("Invalid Input");
        exit(0);
    }
    disc= b*b - 4 * a * c ; 
    if(disc==0) {
        printf("Roots are Real and Equal.\n");
        r1 = -b/(2.0*a);
        r2 = r1;
        printf("Root 1 = %.2f\n",r1);
        printf("Root 2 = %.2f",r2);
    }
    else if(disc>0) {
        printf("Roots are Real and Distinct.\n");
        r1 = (-b+sqrt(disc))/(2.0*a);
        r2 = (-b-sqrt(disc))/(2.0*a);
        printf("Root 1 = %.2f\n",r1);
        printf("Root 2 = %.2f",r2);
    }
    else {
        printf("Roots are Imaginary.\n");
        rp=-b/ (2.0*a );
        ip = sqrt(fabs(disc))/(2.0*a);
        printf("Root 1 = %.2f+i%.2f\n",rp,ip);
        printf("Root 2 = %.2f-i%.2f",rp,ip);
    }
}