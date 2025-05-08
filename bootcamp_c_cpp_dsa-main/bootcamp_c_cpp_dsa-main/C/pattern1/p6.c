#include<stdio.h>
void main(){

	int row;

	printf("Enter the row:\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){

		for(int j=1;j<=4;j++){
			if(j==1 || j==3){
				printf("$ ");
			}else{
				printf(" = ");
			}
		}
		 printf("\n");
	}
}
