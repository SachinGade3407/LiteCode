#include<stdio.h>
void main(){

	int num;
	int rem;

	printf("Enter the number\n");
	scanf("%d",&num);

	while(num!=0){
		rem=num%10;
		printf("%d",rem);
		num=num/10;
	}
	printf("\n");
}

