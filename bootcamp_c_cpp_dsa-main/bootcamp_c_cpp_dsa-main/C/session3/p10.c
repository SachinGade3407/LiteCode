/* 10
   I H
   7 6 5 
   D C B A*/
#include<stdio.h>
void main(){

	int rows;
	
	

	printf("Enter no of rows:\n");
	scanf("%d",&rows);

	int num;

	for(int i=1;i<=rows;i++){

		for(int j=1;j<=i;j++){

			printf("%d ",num);
			num--;
		}
		printf("\n");
	}
}


