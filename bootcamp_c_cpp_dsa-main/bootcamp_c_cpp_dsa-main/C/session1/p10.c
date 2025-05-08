#include<stdio.h>
void main(){

	int row;
	printf("Enter num of row:\n");
	scanf("%d",&row);

	int num=1;
	for(int i=0;i<=row;i++){
		for(int j=1;j<=row;j++){
			printf("%d ",num);
			num++;
			num++;


		}
		printf("\n");
	}
}
