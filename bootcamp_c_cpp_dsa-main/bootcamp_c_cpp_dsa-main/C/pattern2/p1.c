#include<stdio.h>
void main(){

	int rows;
	int num,num1;


	printf("Enter the rows:");
	scanf("%d",&rows);

        printf("Enter any num:");
        scanf("%d",&num);
	
	for(int i=1;i<=rows;i++){
		num1=num;

		for(int j=1;j<=rows;j++){

			printf("%d ",num1);
			num1--;

		}
		printf("\n");

		num++;
	}
}




