//C program to calculate Compound Interest
#include<stdio.h>
#include<math.h>
int main() {
    float Year;
    float Principal,Rate,CI,Amount;
    printf("Enter Principal \n");
    scanf("%f",&Principal);
    printf("Enter Rate \n");
    scanf("%f",&Rate);
    printf("Enter Year \n");
    scanf("%f",&Year);
    Amount=Principal*((pow((1+Rate/100),Year))); 
    CI=Amount-Principal;
    printf("The Amount is %f \n",Amount);
    printf("The Compound interest is %f \n",CI);
    return 0;
}
