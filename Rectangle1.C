#include<stdio.h>
int main() {
    float Length,Width,Perimeter;
    printf("Enter Length and width=");
    scanf("%f%f",&Length,&Width);
    Perimeter=2*(Length+Width);
    printf("Perimeter is %f\n",Perimeter);
    return 0;
}