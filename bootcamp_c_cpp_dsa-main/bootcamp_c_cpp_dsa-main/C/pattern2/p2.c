#include<stdio.h>
void main(){

	int num1,num,rows;
	char ch1,ch;

	printf("enter the num of rows:");
	scanf("%d",&rows);

	printf("enter any num:");
        scanf("%d",&num1);

	printf("enter any character:");
        scanf(" %c",&ch1);

	for(int i=1; i<=rows; i++){
		num=num1;
		ch=ch1;
		for(int j=1;j<=rows-1;j++){
			if(i%2==0){
				printf("%c ",ch);
				ch--;
			}else{
				printf("%d",num);
				num--;
			}
		}
		printf("\n");
	}
}





