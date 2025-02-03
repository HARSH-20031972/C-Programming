#include<stdio.h> 
int main() {
	int i,j,line;
	printf("Enter Number of Lines=");
	scanf("%d",&line);
	for(i=1;i<=line;i++) {
		for(j=1;j<=4;j++) {
			printf("*");
		}
		printf("\n");
	}
}
