//sum of 1 to 10 numbers with recursion
#include<stdio.h>
int sum=0;
void fun(int x){
	sum=sum+x;
	if(x!=0){
	fun(--x);
	}else{
	printf("sum of 1 to 10 number is %d\n",sum);
}
}
void main(){
	fun(10);
	printf("sum of 1 to 10 number is %d\n",sum);
}

