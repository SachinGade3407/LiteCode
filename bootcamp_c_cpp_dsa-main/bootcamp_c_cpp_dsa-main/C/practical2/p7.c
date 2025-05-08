#include<stdio.h>
void main(){

	int num;
	int i;
	int rem=0,sum=0;

	printf("Enter the number\n");
	scanf("%d",&num);

	while(i<=num){
		rem=num%10;
		num=num/10;
		sum=sum+rem;
		i+2;
	}
	printf("sum is :%d\n",sum);
}

