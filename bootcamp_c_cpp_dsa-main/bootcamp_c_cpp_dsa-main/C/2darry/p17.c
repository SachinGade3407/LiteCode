#include<stdio.h>
void main(){

	int arr[5]={10,20,30,40,50};
	int *ptr1=arr;
	int *ptr2=&arr[2];
	int (*ptr)[5]=&arr;

	printf("%d\n",*ptr1);
	printf("%d\n",*ptr2);
	printf("%ls\n",*ptr);
	printf("%d\n",**ptr);

}

			

