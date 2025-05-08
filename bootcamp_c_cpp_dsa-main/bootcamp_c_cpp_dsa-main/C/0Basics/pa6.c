#include<stdio.h>
void main(){
	int x;
	
	printf("Enter number\n");
	scanf("%d",&x);

	if(x%2==0){
		printf("Given number is even number");
	}else{
		printf("given number is odd number\n");
	}
}
