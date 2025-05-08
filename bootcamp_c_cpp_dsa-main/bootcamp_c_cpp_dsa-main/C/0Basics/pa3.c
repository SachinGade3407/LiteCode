#include<stdio.h>
void main(){
	int x;
	int y;
	
	printf("Enter number1\n");
	scanf("%d",&x);

	printf("Enter number2\n");
	scanf("%d",&y);

	if(x<y){
		printf("%d is greater than %d\n",y,x);
	}else if(x>y){
		printf("%d is greater than %d\n",x,y);
	}else{
		printf("both are same\n");
	
	}
}
