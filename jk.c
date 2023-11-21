#include <stdio.h>
#include<math.h>

int main() {
    int a,b,c;
    float r1,r2,rp,ip,disc;
    printf("Enter the coeffecients of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    disc = b*b-4*a*c;
    if(disc==0) {
        printf("Roots are Real and Equal.");
        r1=-b/(2.0*a);
        r2=r1;
        printf("Root1 = %.2f\n",r1);
        printf("Root2 = %.2f\n",r2);
    }
    else if(disc>0) {
        printf("Roots are Real and Distinct.");
        r1=(-b+sqrt(disc))/(2.0*a);
        r2=(-b-sqrt(disc))/(2.0*a);
        printf("Root1 = %.2f\n",r1);
        printf("Root2 = %.2f\n",r2);
    }
    else {
        printf("Roots are Imaginary.");
        rp = -b/(2.0*a);
        ip = sqrt(fabs(disc))/(2.0*a);
        printf("Root 1 = %.2f+i%.2f\n",rp,ip);
        printf("Root 1 = %.2f-i%.2f\n",rp,ip);
        
    }

    return 0;
}