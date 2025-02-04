#include<stdio.h>
int main() {
	int i,j,Line;
	printf("Enter Line=");
	scanf("%d",&Line);
	for(i=Line;i>=0;i--) {
		for(j=1;j<=i;j++) {
			printf("%c",i+64);
		}
		printf("\n");
	}
}
