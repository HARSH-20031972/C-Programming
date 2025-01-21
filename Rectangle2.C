#include<stdio.h>
int main() {
    float length,width,Area,Perimeter;
    printf("Enter Length: \n");
    scanf("%f",&length);
    printf("Enter Width: \n");
    scanf("%f",&width);
    Perimeter=2*(length+width);
    Area=length*width;
    printf("Perimeter is %f \n",Perimeter);
    printf("Area is %f \n",Area);
    return 0;
}