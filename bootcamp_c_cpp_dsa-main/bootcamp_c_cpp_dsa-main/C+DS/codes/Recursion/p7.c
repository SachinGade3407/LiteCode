//not proper way
#include<stdio.h>
int sum=0;
void sumN(int num){
	if(num!=0){
		sum=sum+num;
		printf("%d\n",num);
		sumN(--num);
	}
	printf("%d\n",sum);
}
void main(){
	sumN(5);
}


