#include<stdio.h>
void main(){

	int num1,num2;

	printf("Enter the first number\n");
	scanf("%d",&num1);

	printf("Enter the last number\n");
        scanf("%d",&num2);

	printf("The ASCII values between %d to %d is:\n",num1,num2);

	for(int i=num1;i<=num2;i++){
		printf("%c=%d\n",i,i);
	}
}

