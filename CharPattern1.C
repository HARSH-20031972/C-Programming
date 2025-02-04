#include<stdio.h>
int main() {
	int i,j,Line;
	printf("Enter Line=");
	scanf("%d",&Line);
	for(i=1;i<=Line;i++) {
		for(j=1;j<=i;j++) {
			printf("%c",j+64);
		}
		printf("\n");
	}
}
