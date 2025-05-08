#include<stdio.h>
void main(){

	int num1,num2;


	printf("Enter number1\n");
	scanf("%d",&num1);

	printf("Enter number2\n");
        scanf("%d",&num2);

	for(int i=num1;i>=num2;i--){
		if(i%11==0){
			printf("%d\n",i);
		}
	}
}


