/* 1 
   2 4 
   3 5 9 
   4 8 12 16*/

#include<stdio.h>
void main(){

	int rows;
	
	printf("Enter no of rows:\n");
	scanf("%d",&rows);


	for(int i=i;i<=rows;i++){

		int num=i;
		for(int j=1;j<=i;j++){

			printf("%d ",num*j);
			
		}
		num++;
		printf("\n");
	}
}


