#include<stdio.h>
void main(){

	int arr[]={10,20,30,40,50};

	int *ptr=&(arr[0]);
	ptr++;
	printf("%d",*ptr);
	++ptr;
	printf("\n");
	printf("%d",*ptr);
	printf("\n");

}
