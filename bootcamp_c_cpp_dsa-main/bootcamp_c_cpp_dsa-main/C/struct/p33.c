#include<stdio.h>
struct emp{

	int x:4;
	float y;
	double z;
}obj2;

void main(){

	printf("%d\n",obj2.x);
	printf("%f\n",&obj2.y);
	printf("%f\n",obj2.z);
}


