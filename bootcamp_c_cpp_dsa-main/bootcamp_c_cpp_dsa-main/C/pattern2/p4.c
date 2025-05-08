#include<stdio.h>
void main(){

	int rows;
	 char ch;

	 printf("Enter number of rows:");
	 scanf("%d",&rows);

	 printf("Enter any character:");
         scanf(" %c",&ch);

	 for(int i=1;i<=rows;i++){
		 for(int j=1;j<=rows;j++){
			 printf("%c ",ch);
			 ch--;
		 }
		 printf("\n");
	 }
}


