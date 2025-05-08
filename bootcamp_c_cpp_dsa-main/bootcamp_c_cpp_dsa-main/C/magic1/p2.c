#include<stdio.h>
void main(){

	int num;
	int rem=0;
	int count=0;

	printf("Enter the number:");
	scanf("%d",&num);

	for (int i=1;i<=num;i++){
		rem=num%10;
		count=count+1;
		num=num/10;
	}
	printf("count is:%d\n,count");
}

