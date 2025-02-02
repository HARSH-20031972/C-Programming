#include<stdio.h>
void Sum();//function prototype 
int main() {
	Sum();//function call
	return 0;
}
void Sum()//function definition
{
	int a,b,c;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	c=a+b;
	printf("Sum is %d",c);
} //No Return Keyword 
