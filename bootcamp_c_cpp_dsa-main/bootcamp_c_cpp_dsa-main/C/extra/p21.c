#include<stdio.h>
void main(){

	int plane;
	int row;
	int col;

	printf("Enter plane\n");
	scanf("%d",&plane);
	printf("Enter row for array\n");
	scanf("%d",&row);
	printf("Enter col for array\n");
	scanf("%d",&col);

	int arr[plane][row][col];
	printf("Enter array element\n");
	for(int i=0;i<plane;i++){
		for(int j=0;j<row;j++){
			for(int k=0;k<col;k++){
				scanf("%dt",&arr[i][j][k]);
			}printf("\n");
			printf("\n");
		}
		printf("element are\n");
		for(int i=0;i<plane;i++){
			for(int j=0;j<row;j++){
				for(int k=0;k<col;k++){
					printf("%dt",arr[i][j][k]);
				}printf("\n");
			}printf("\n");
		}
	}
}


