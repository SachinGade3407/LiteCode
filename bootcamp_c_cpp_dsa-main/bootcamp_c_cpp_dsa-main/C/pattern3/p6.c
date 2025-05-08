#include<stdio.h>
void main(){

	int rows;
	int num;

	printf("Enter num of rows:");
	scanf("%d",&rows);

	printf("Enter any num:");
	scanf("%d",&num);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			if((i%2==0&&j%2!=0)||(i%2!=0&&j%2==0)){
				printf("%d\t",num*num);
			}else{
				printf("%d\t",num);
			}
			num++;
		}
		printf("\n");
	}
}


