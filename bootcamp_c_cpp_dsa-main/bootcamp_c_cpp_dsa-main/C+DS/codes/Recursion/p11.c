//proper code of factorial


#include<stdio.h>

int factorial(int num){
	if(num<=1){
		return 1;
	}
	return factorial(num-1)*num;
}
void main(){
	int ret=factorial(5);
	printf("%d\n",ret);
}
