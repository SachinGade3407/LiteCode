#include<stdio.h>
void main(){
	int num1,num2;
	printf("Enter the value of number1\n");
	scanf("%d",&num1);

	printf("Enter the value of number2\n");
        scanf("%d",&num2);
        
	for(int i=num1;i<=num2;i++){
		printf("%d\n",i);
	}
}

