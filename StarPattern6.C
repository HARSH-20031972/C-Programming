#include<stdio.h>
int main() {
	int i,j,line;
	printf("Enter Number of lines=");
	scanf("%d",&line);
	for(i=1;i<=line;i++) {
		for(j=1;j<=i;j++) {
			printf("*");
		}
		printf("\n");
	}
}
