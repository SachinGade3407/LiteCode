#include<stdio.h>
void main(){
	
	int row;
	int x = 1;

	printf("Enter the row:\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){

		for(int j=1;j<=3;j++){
			printf("%d ", x);
			x=x+2;
		}
		printf("\n");
	}
}
