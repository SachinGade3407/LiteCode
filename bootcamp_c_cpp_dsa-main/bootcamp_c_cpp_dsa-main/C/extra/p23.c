#include<stdio.h>
void main(){
	int row,col;
	printf("Enter row array\n");
	scanf("%d",&row);
	printf("Enter col array\n");
        scanf("%d",&col);
	int  arr[row][col];
	int (*ptr)[][col]=&arr;
	printf("Enter array element\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&*(*(*ptr+i)+j));
		}
	}
	printf("Element are:\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d\n",*(*(*ptr+i)+j));
		}
	}
}


