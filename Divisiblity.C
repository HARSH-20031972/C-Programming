#include<stdio.h>
int main() {
    int num;
    printf("Enter Number:");
    scanf("%d",&num);
    if(num%5==0){
        printf("Divisible by 5");
    }
    else{
        printf("Non Divisible by 5");
    }
    return 0;
}