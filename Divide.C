#include<stdio.h>
int main() {
    int a,b,c,d;
    printf("Enter Number a:");
    scanf("%d",&a);
    printf("Enter Number b:");
    scanf("%d",&b);
    c=a/b;
    d=a%b;
    printf("Quotient is %d \n" ,c);
    printf("Remainder is %d \n",d);
    return 0;
}
