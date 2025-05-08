#include<stdio.h>

int sumarry(int *ptr,int sizearry){
	int sum=0;

	for(int i=0;i<sizearry;i++){

		sum=sum+*(ptr+i);
	}
	return sum;
}
void main(){

	int arr1[]={10,20,30,40,50};
	int sizearry=sizeof(arr1);
	int sum=sum arr1(arr1,sizearr);
	printf("%d\n",sum of (arr1));
}

