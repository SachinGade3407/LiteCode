#include<stdio.h>
void main(){

	int num=1;

	int row;


	printf("Enter row:\n");
	scanf("%d",&row);
	
	

	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			printf("%d ",num);
			num++;
			num++;
			num++;
			
		}
	
		printf("\n");
	}
}
