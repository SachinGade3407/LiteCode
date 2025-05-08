#include<stdio.h>
void main(){

	char ch;

	printf("Enter char:");
	scanf("%c",&ch);

	for(int row=1;row<=3;row++){

		for(int col=1;col<=3;col++){

			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
