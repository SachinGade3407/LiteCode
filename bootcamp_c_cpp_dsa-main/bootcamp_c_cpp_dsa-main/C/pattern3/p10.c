#include<stdio.h>
void main(){

	int rows;
	int num1=0;
	int num2=1;
	int sum=0;

	printf("Enter num of rows:");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){

		for(int j=1;j<=rows;j++){
			printf("%d\t",sum);
			num1=num2;
			num2=sum;
			sum=num1+num2;
		}
		printf("\n");
	}
}

