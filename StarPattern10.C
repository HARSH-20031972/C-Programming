#include<stdio.h>
int main() {
	int i,j,Line;
	printf("Enter Layer=");
	scanf("%d",&Line);
	for(i=1;i<=Line;i++) {
	for(j=1;j<=Line-i;j++)
		printf(" ");
		for(j=1;j<=i;j++)
		printf("*");
		
		printf(" \n");
	}
}

