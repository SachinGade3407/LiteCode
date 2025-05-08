#include<stdio.h>
void main(){

	int row;
	int col;
	printf("Enter row array\n");
	scanf("%d",&row);

	printf("Enter col array\n");
        scanf("%d",&col);

	int arr[row][col];
	printf("Enter array element\n");

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Element are:\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d",arr[i][j]);
		}
	}

}



