#include<stdio.h>
void main(){
	int row;
	int num=1;

	printf("Enter the  rows:\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			printf("%d",num);
			num++;
		}
		printf("\n");
		num=num+3;
	}
}

