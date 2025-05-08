#include<stdio.h>
void main(){

	int num,fact=1;

	printf("Enter number: ");
	scanf("%d",&num);

	if(num>0);
		for(int i=1;i<=num;i++){
			fact=fact*i;
		}
		printf("factorial of %d is %d\n",num,fact);
}

