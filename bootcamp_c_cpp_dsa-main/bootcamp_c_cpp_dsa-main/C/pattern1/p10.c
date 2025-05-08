#include<stdio.h>
void main(){

	int row;

	printf("Enter the row:\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){

		char ch= 'D';

		int x=4;

		for(int j=1;j<=4;j++){
			printf("%c%d ",ch,x);
			ch--;
			x--;
		}
		printf("\n");
	}
}

