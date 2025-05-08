#include<stdio.h>
void main(){
	int num1,num2;
	printf("Enter any two number:\n");
	scanf("%d%d",&num1,&num2);

	for(float i=num1;i<=num2;i++){
		printf("%0.2f=%0.2f\n",i,1/i);
	}
}
