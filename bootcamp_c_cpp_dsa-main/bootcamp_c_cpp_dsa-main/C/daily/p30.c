#include<stdio.h>
#include<stdlib.h>

void fun(){

	int x=10;
	int *ptr=(int *) malloc(sizeof(int));
	*ptr=50;
	printf("%d",*ptr);
}
void main(){
	fun();
}

