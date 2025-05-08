//sum of n natural numbers


#include<stdio.h>

int sumN(int num){
	if(num<=1){
		return 1;
	}
	return sumN(num-1)+num;
}
void main(){
	int ret=sumN(10);
	printf("%d\n",ret);
}
