// C program to do arithmetic operations on two numbers of inputs supplied by the user
#include<stdio.h>
int main() {
    int a,b,c,d,e,f,g;
    printf("Enter 1st Number:");
    scanf("%d",&a);
    printf("Enter 2nd Number:");
    scanf("%d",&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;
    printf("Sum is %d \n" ,c);
    printf("Differrence is %d \n",d);
    printf("Product is %d \n",e);
    printf("Quotient is %d \n",f);
    printf("Remainder is %d \n",g);
    return 0;
}
