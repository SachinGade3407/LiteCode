#include<stdio.h>
void main(){

	int num1=0,num2=1,num;
	int i=3;
	int sum =num1+num2;

	printf("Enter the number\n");
	scanf("%d",&num);

	printf("%d\n %d\n",num1,num2);
	while(num1<=num2){
		printf("%d\n",sum);
		num1=num2;
		num2=sum;
		sum=num1+num2;
		i++;
	}
}
