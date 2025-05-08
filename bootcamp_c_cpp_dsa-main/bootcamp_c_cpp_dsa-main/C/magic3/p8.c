#include<stdio.h>
void main(){

	int arr[6]={1,2,3,4,5};
	++arr[1];
	arr[arr[1]]++;

	arr[arr[arr[1]]]++;

	for(int i=0;i<6;i++){

		printf("%d\n",arr[i]);
	}
}

