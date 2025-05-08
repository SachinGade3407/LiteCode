#include<stdio.h>
void printarr1(int *ptr,int arrsize){
	 
	for(int i=0;i<arrsize;i++){

		printf("%d\n",*(ptr+i));
	}
}
void printarr2(int arr[],int arrsize){

	for(int i=0;i<arrsize;i++){
		printf("%d\n",arr[i]);
	}
}
void main(){
	int arr[]={10,20,30,40,50};
	int arrsize=sizeof(arr);
	printarr1(arr,arrsize);
	printarr2(arr,arrsize);
}

