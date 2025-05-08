#include<stdio.h>
void main(){
	int x;
	printf("Enter number\n");
	scanf("%d",&x);

	if(x<10){
		printf("%d is smaller than10\n",x);
	}else{
		printf("%d is greater than10\n",x);
	}
}
