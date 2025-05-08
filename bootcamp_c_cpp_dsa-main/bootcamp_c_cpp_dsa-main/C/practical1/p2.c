/*wap to find max among 3 numbers*/

#include<stdio.h>
void main(){
	int x,y,z;

	printf("Enter number1\n");
	scanf("%d",&x);

	printf("Enter number2\n");
	scanf("%d",&y);

	printf("Enter number3\n");
	scanf("%d",&z);

	if(x>y && x>z){
		printf("%d is greater number\n",x);
	}else if(y>x && y>z){
		printf("%d is greater number\n",y);
	}else if(z>x && z>y){
		printf("%d is greater number\n",z);
	}else if(x==y && x>z){
		printf("%d is maximum number\n",x);
	}else if(x==y && x<z){
		printf("%d is maximum number\n",z);
	}else if(y==z && y>x){
		printf("%d is maximum number\n",y);
	}else if(y==z && y<x){
		printf("%d is maximum number\n",x);
	}else if(z==x && z>x){
		printf("%d is maximum number\n",z);
	}else if(z==x && z<x){
		printf("%d is maximum number\n",x);
	}else{
		printf("number are same\n");
	}
}

