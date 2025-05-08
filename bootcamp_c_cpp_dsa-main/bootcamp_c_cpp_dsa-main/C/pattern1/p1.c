#include<stdio.h>
void main(){
	
	int row;

	printf("Enter the rows:\n");
	scanf("%d",&row);

	for(int i=0;i<=row;i++){
		int x=1+i;
		for(int j=1;j<=4;j++){
			printf("%d ",x);
		         x++;
		}
		printf("\n");
	}
}
