#include<stdio.h>
void main(){

	int x=10;
	char ch='A';
	double f = 20.85;
	void* arr[3]={&x,&ch,&f};

	printf("%p\n",arr[0]);
	printf("%p\n",arr[1]);
	printf("%p\n",arr[2]);

	printf("%d\n",*(int*)(arr[0]));
	printf("%c\n",*(int*)(arr[1]));
	printf("%lf\n",*(int*)(arr[2]));

}

	
