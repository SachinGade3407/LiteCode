#include<stdio.h>
void main(){

	int x=10;
	int  *iptr=&x;
	int **ptr2=&ptr2;
	int **ptr3=&ptr3;
	int ***ptr4=&ptr2;

	printf("%d\n",x);
	printf("%d\n",*ptr4);
	printf("%d\n",**ptr2);
	printf("%d\n",**ptr3);
	printf("%d\n",***ptr4);
}

