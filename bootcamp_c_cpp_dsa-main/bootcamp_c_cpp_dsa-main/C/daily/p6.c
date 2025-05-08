#include<stdio.h>
void fun arr(int*arr){

	printf("%p\n",arr);
}
void main(){

	int arr1[]={10,20,30,40};
	fun arr(arr1);
	fun arr(&arr1[1]);
}

