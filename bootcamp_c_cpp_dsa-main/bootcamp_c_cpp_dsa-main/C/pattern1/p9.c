#include<stdio.h>
void main(){

	int x=1;
	int row;

	printf("Enter th row:\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){

		for(int j=1;j<=3;j++){

			printf("%d ",x*x+1);
			x++;
		}
		printf("\n");
	}
}

