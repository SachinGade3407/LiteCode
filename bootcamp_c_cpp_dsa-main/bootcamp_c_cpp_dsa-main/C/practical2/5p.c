#include<stdio.h>
void main(){
	int num1;
	int num2;

	printf("Enter  num1\n");
	scanf("%d",&num1);

	printf("Enter num2\n");
	scanf("%d",&num2);

	for(int i=num2;i>=num1;i--){
		if(num2%2==0){
			printf("%d\t",i);
		}
	}
	printf("\n");

	for(int i=num1;i<=num2;i++){
		if(num1%2!=0){
			printf("%d\t",i);
		}
	}
}
