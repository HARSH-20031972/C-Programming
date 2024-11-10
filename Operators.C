#include<stdio.h>
int main() {
    int a,b,c,d,e,f,g,h;
    printf("Enter a=");
    scanf("%d",&a);
    printf("Enter b=");
    scanf("%d",&b);
    printf("Enter c=");
    scanf("%d",&c);
    printf("Enter d=");
    scanf("%d",&d);
    e=++a;
    f=b++;
    g=--c;
    h=d--;
    printf("e=%d a=%d\n",e,a);
    printf("f=%d b=%d\n",f,b);
    printf("g=%d c=%d\n",g,c);
    printf("h=%d d=%d\n",h,d);
    return 0;
}