#include<stdio.h>
void main(){

	int rows;
	int num,num1;
	char ch,ch1;

	printf("Enter num of rows:");
	scanf("%d",&rows);

	printf("Enter any num:");
	scanf("%d",&num1);

	printf("Enter any cahracter:");
	scanf(" %c",&ch1);

	for(int i=1;i<=rows;i++){
		num=num1;
		ch=ch1;
		for(int j=1;j<=rows;j++){
			if(j%2!=0){
				printf("%d",num);
				num--;
			}else{
				printf("%c ",ch);
				ch++;
			}
		}
		printf("\n");
	}
}



