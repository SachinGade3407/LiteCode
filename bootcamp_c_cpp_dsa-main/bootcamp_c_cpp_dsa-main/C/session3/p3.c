#include<stdio.h>
void main(){

	int rows;
	int num=1;

	printf("Enter no of rows:\n");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){

		int num=i;

		for(int j=1;j<=i;j++){
			printf("%d ",num);
		}
		num++;
		printf("\n");
	}
}


