#include<stdio.h>
void main(){

	int rows;

	printf("Enter num of rows:");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			if(i%2 != 0){
				printf("= ");
			}else{
				printf("$ ");
			}
		}
		printf("\n");
	}
}
