#include<stdio.h>
void main(){
	

	int num1,num2;
	printf("Enter num1:");
	scanf("%d",&num1);

	printf("Enter num2:");
	scanf("%d",&num2);

	int *iptr1=&num1;
	int *iptr2=&num2;

	*iptr1=num2;
	*iptr2=num1;

	printf("%d\n",num1);
	printf("%d\n",num2);

}


