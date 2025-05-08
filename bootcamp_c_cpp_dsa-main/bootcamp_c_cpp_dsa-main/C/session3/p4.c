#include<stdio.h>
void main(){

	int rows;

	printf("Enter no of rows:\n");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){

		int num=1;
		for(int j=1;j<=i;j++){

			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}
