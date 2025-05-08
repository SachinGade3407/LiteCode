#include<stdio.h>
void main(){

	int x;
	printf("Enter the number\n");
		scanf("%d",&x);

	if(x%3==0){
		printf("multiple of 3\n");
	}else{
		printf("%d is not multiple of 3\n",x);
	
	}
}
