#include<stdio.h>
void main(){
	int x;
	printf("Enter value\n");
	scanf("%d",&x);

	if(x%5 ==0 && x%11 ==0){
		printf("Number divisible by5 and 11");
	}else{
		printf("Number is not divisible by 5 nad 11");
	}

}
