#include<stdio.h>
void add (int a,int b){

	printf("%d\n",a+b);
}
void sub(float a,float b){
	printf("%f\n",a-b);
}
void main(){
	void (*ptr)(int ,int);
	ptr=&add;
	ptr(10,20);
	sub(20,30);
}

