//WAP to print the addition of factorial of two given numbers from user 

#include<stdio.h>
void main(){
	int num1,num2;
	int fact1=1;
	int fact2=1;
	printf("enter any two numbers:\n");
	scanf("%d%d",&num1,&num2);

	for(int i=1;i<=num1;i++){
		fact1=fact1*i;
	}

	for(int i=1;i<=num2;i++){
		fact2=fact2*i;
	}
	int sum=fact1+fact2;

	printf("the sum of factorial of %d and %d is :%d\n",num1,num2,sum);
}
