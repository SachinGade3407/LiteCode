/* composite number between given range*/


#include<stdio.h>
void main(){

	int num1;
	int num2;
	int count=0;

	printf("Enter the num1:");
	scanf("%d",&num1);

	printf("Enter the num2:");
	scanf("%d",&num2);

	for(int i=num1;i<=num2;i++){

		for(int j=1;j<=num2;j++){

			if(i%j==0){
				count=count+i;
			}
		}
		if(count>2){
			printf("%d",i);
		}
	}
}
