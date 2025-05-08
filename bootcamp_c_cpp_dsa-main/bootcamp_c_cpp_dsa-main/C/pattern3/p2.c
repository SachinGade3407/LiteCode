#include<stdio.h>
void main(){

	int rows;
	int num,num1;
	char ch,ch1;

	printf("Enter num of rows:");
	scanf("%d",&rows);

        printf("Enter any num:");
        scanf("%d",&num);

	printf("Enter any character:");
        scanf(" %c",&ch);

	for(int i=1;i<=rows;i++){
		num1=num;
		ch1=ch;

		for(int j=1;j<=rows;j++){
			if(i%2 != 0){

				if(j%2 != 0){
					printf("%d ",num1);
			}else{
				printf("%c ",ch1);
			}
			num1--;
			ch1++;
		}else{
			if(j%2 != 0){
				printf("%c ",ch1);
			}else{
				printf("%d ",num1);
			}
			num1--;
			ch1++;
		}
		
		}
	}
}
