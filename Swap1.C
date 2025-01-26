#include<stdio.h>
int main() {
    int A,B,C;
    printf("Enter Number A:");
    scanf("%d",&A);
    printf("Enter Number B:");
    scanf("%d",&B);
    C=A;
    A=B;
    B=C;
    printf("Swapping is A=%d,B=%d",A,B);
    return 0;
}
