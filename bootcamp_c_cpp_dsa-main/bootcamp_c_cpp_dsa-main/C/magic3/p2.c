#include<stdio.h>
void main(){

	int x=45;
	int y=35;
	int *ptr1=&x;
	printf("%p\n",ptr1);
	printf("%p\n",ptr1);
	int temp=*ptr1+*ptr1+2;
	printf("%d\n",temp);
}
