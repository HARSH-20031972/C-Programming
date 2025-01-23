#include<stdio.h>
int main() {
    float Side,Area,Perimeter;
    printf("Enter Side:");
    scanf("%f",&Side);
    Area=Side*Side;
    Perimeter=4*Side;
    printf("Area is %f \n",Area);
    printf("Perimeter is %f \n",Perimeter);
    return 0;
}