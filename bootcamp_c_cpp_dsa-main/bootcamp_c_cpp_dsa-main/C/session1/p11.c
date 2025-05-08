#include<stdio.h>
void main(){

	int row;
	printf("Enter num of row:\n");
	scanf("%d",&row);

	int num=1;
	char ch ='a';

	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){

			if(i%2 !=0){
				printf("%d ",num);
				num++;
			}else{
				printf("%c ",ch);
				ch++;
			}
		}
		printf("\n");
	}
}

