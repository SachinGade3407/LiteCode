#include<stdio.h>
void main(){

	char ch='A';
	int row;

	printf("Enter the row:\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		for(int j=1;j<=3;j++){
			printf("%c ",ch);
			ch=ch+1;
		}
		printf("\n");
	}
}
