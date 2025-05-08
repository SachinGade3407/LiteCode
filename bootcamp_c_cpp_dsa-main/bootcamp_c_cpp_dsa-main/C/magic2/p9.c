#include<stdio.h>
void main(){

	int arr1[]={10,20,30,40,50};
	int arr2[]={60,70,80,90,100};

	int *iptr1=null;
	int *iptr2=null;

	iptr1=arr1+3;
	iptr2=arr2+2;

	iptr1=35;

	for(int i=0;i<5;i++){

		printf("%d",arr1[i]);
	}
	for(int j=0;j<5;j++){
		printf("%d",arr2[i]);
	}
}

