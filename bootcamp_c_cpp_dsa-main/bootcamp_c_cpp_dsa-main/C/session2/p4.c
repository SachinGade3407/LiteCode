#include<stdio.h>
void main(){

	int row;
	char ch='d';

	printf("Enter num of row:\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			printf("%c ",ch);
			
		}
		ch--;
		printf("\n");

	}
}
