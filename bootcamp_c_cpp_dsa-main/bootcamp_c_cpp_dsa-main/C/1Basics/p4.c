#include<stdio.h>
void main(){

	int num1,num2;
	printf("Enter the number1\n");
	scanf("%d",&num1);

	printf("Enter the number2\n");
	scanf("%d",&num2);

	for(int i=num1;i<=num2;i++){
		if(i%2==0){
			printf("%d\n",i);
		}
	}
}
