#include<stdio.h>
void main(){

	int arr[3][3]={1,2,3,4,5,6,7,8,9};

	printf("%ld\n",sizeof(arr));
	printf("%ld\n",sizeof arr[0]);
	printf("%ld\n",sizeof arr[0][0]);
}
