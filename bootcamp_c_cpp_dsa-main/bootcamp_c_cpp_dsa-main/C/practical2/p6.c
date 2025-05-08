#include<stdio.h>
void main(){

	int num;
	int i=1;
	int rem=0,count=0;

	printf("Enter the number\n");
	scanf("%d",&num);

	while(i<=num){
		rem=num%10;
		count++;
		num=num/10;
		i++;
	}
	printf("count is :%d\n",count);
}
