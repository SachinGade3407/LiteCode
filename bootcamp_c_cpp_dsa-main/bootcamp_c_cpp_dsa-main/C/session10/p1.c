/* 
   1
   12
   234
   4567
   7891011
   */
#include<stdio.h>
void main(){

	int rows;
	int x=1;

	printf("Enter no of rows:\n");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=1;j++){
			printf("%d",x);
			x++;
			}
		printf("\n");
		x=x-1;
	}
}




