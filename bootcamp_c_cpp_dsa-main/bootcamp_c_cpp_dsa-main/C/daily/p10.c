#include<stdio.h>
void fun(int,int,int);
void main(){

	int x,y,z=10,20,33;
	fun(x,y,z);
	fun(x,y);
}
void main(int x,int y,int z=50){
	printf("Add=%d\n",x+y+z);
}

