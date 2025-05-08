//print 1 to 10 number with recursion

#include<stdio.h>

void fun(int x){
	printf("%d\n",x);
	if(x!=1){
		fun(--x);
	}
}
void main(){
	fun(10);
}
