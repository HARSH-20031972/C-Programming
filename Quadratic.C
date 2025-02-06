#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c,D;
    float r1,r2,r3;
    printf("Enter coefficients of Quadratic Equation=");
    scanf("%d%d%d",&a,&b,&c);
    D=(b*b)-4*a*c;
    if(D>0) {
        printf("Two Roots are unequal and real \n");
        r1=(-b+sqrt(D))/2*a;
        r2=(-b-sqrt(D))/2*a;
        printf("Roots are %f and %f",r1,r2);
    }
    else if(D==0) {
        printf("Two Roots are real and equal \n");
        r3=b/2.0*a;
        printf("Equal Roots are %f",r3);
    }
    else{
        printf("Roots are Imaginary and can't be calculated");
    }
    return 0;
}