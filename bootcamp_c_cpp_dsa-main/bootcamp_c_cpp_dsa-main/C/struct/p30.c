// union


#include<stdio.h>
struct Demo1{

	int x;
	float y;
	double z;
}obj1;

union Demo2{

	int x;
	float y;
	double z;
}obj2;
void main(){

	printf("%ld\n",sizeof(obj1));
	printf("%ld\n",sizeof(obj2));
}

