#include<stdio.h>
int main() {
    int X,Y;
    printf("Enter Number X:");
    scanf("%d",&X);
    printf("Enter Number Y:");
    scanf("%d",&Y);
    X=X+Y;
    Y=X-Y;
    X=X-Y;
    printf("X=%d Y=%d",X,Y);
    return 0;
}