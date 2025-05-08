//
//

#include<stdio.h>
void fun(int x){
	printf("hello\n");

	if(x!=1){
		fun(--x);
	printf("bye\n");
	}
	//printf("bye\n");
}
void main(){

	fun(5);
}
