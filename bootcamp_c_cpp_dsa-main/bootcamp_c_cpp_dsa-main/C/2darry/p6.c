#include<stdio.h>
void main(){

	int rows,col;

	printf("Enter rows and col:");
	scanf("%d,%d",&rows,&col);

	int arr[rows][col];
	int sum=0;

	printf("Enter array elemnet:\n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<col;j++){

			scanf("%d",&arr[i][j]);
			sum=sum+arr[i][j];
		}
	}
}

