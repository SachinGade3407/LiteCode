#include<stdio.h>
void main(){
	int plane,row,col;
	printf("Enter plane\n");
	scanf("%d",&plane);
	printf("Enter row array\n");
	scanf("%d",&row);
	printf("Enter col array\n");
	scanf("%d",&col);

	int arr[row][col][plane];
	int (*ptr)[][row][col]=&arr;
	printf("Enter array element\n");
	for(int i=0;i<plane;i++){
		for(int j=0;j<row;j++){
			for(int k=0;k<col;k++){
				scanf("%dt",&*(*(*(*ptr+i)+j)+k));
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("Element are\n");
	for(int i=0;i<plane;i++){
		for(int j=0;j<row;j++){
			for(int k=0;k<col;k++){
				printf("%d",*(*(*(*ptr+i)+j)+k));
			}
			printf("\n");
		}
		printf("\n");
	}
}
