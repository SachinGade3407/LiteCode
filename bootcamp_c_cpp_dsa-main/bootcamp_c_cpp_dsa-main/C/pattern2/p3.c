#include<stdio.h>
void main(){

	int rows,num;

	printf("Enter the num of rows:");
	scanf("%d",&rows);

	printf("Enter any num:");
        scanf("%d",&num);
        
        for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			printf("%d",num);
		}
		num--;
		printf("\n");
	}
}

