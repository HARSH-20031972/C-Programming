#include<stdio.h>
int main() {
    int a=5;
    float b=5.555555;
    double c=2.555555;
    char d='A';
    printf("%d\n",a);                
    printf("%d\n%d\n",a,a);
    printf("%d\n%d\n%d\n",a,a*a,a*a*a);
    printf("%f\n",b);
    printf("%lf\n",c);
    printf("%c",d);
    return 0;
}

