/* c
   b b
   a a a */

#include<stdio.h>
void main(){

	int rows;

	printf("Enter no of rows:\n");
	scanf("%d",&rows);

	char ch=96+rows;


	for(int i=1;i<=rows;i++){
		for(int j=1;j<=i;j++){

			printf("%c ",ch);
			
		
		}
		ch--;
	
		printf("\n");
	}
}

