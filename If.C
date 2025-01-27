#include<stdio.h>
int main() {
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    if(a>0){
        printf("Positive Number");
    }
    if(a<=0){
        printf("Non Positive Number");
    }
    return 0;
}
