#include<stdio.h>
void main(){

	int rows;int num,num1;

	printf("Enter num of rows:");
	scanf("%d",&rows);

	printf("Enter any num:");
	scanf("%d",&num1);

	num=num1;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			if(num%2!=0){
				printf("%d\t",num*num*num);
			}else{
				printf("%d\t",num*num);
			}
			num++;
		}
		printf("\n");
		num=num1+i;
	}
}
