#include<stdio.h>
int main() {
    int n,i=1;
    printf("Enter Number=");
    scanf("%d",&n);
    while(i<=n) {
        printf("%d \n",2*n+1-2*i);
        i++;
    }
    getchar();
}