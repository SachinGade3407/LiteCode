#include<stdio.h>
void main(){

	int num;
	int i=1;

	int rem=0,mul=1;

	printf("Enter the number\n");
	scanf("%d",&num);

	while(i<=num){
		rem=num%10;
		num=num/10;
		mul=mul*rem;
		i++;
	}
	printf("mul is :%d\n",mul);
}

