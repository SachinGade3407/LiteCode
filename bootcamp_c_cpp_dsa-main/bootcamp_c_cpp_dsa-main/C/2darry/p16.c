/* p to a*/

#include<stdio.h>
void main(){

	int arr[5]={10,20,30,40,50};
	int *ptr1=arr;
	int *ptr2=&arr;
	int (*ptr)[5]=&arr;
}
