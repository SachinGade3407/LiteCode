#include<stdio.h>
void main(){

	int row;
	
	printf("Enter number of rows: ");
	scanf("%d",&row);

	for(int i=0;i<=row;i++){
		char ch='A'+i;

		for(int j=1;j<=4;j++){
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
		}
}



