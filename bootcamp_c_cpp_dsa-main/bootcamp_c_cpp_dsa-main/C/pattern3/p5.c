#include<stdio.h>
void main(){

	char ch,ch1;
	int rows;
	printf("Enter num of rows:");
	scanf("%d",&rows);

	printf("Enter any character:");
	scanf(" %c",&ch1);

	ch=ch1;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			if(j==1 || j==3){
				printf("%c ",ch);
			}else{
				ch=ch-32;
				printf("%c ",ch);
				ch=ch+32;
			}
			ch++;

		}
		printf("\n");
		ch=ch1+i;



	}
}

