#include<stdio.h>
void main(){

	int row;

	printf("Enter the rows:\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		for(int j=1;j<=4;j++){
			printf("%d ",i);
		}

		printf("\n");
	}
}
