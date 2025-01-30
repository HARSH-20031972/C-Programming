#include<stdio.h>
#include<math.h>
int main() {
    float Year;
    float Principal,Rate,CI,Amount,SI;
    printf("Enter Principal:");
    scanf("%f",&Principal);
    printf("Enter Rate:");
    scanf("%f",&Rate);
    printf("Enter Year:");
    scanf("%f",&Year);
    Amount=Principal*((pow((1+Rate/100),Year))); 
    CI=Amount-Principal;
    SI=Principal*Rate*Year/100;
    printf("The Amount is %f \n",Amount);
    printf("The Compound interest is %f \n",CI);
    printf("The Simple interest is %f \n",SI);
    return 0;
}

