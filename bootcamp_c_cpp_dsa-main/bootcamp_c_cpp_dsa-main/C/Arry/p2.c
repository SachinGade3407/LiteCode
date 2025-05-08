/* Given an array A of size N of intergers. Your tsak id to find the minimum and maximun element element in the array.
 * Ex 1: Input:N=6 A[]={3,2,1m56m10000m167}output: min =1,max=10000*/


#include<stdio.h>
int minimum(int * arr,int size, int min){
	for(int i=0;i<size;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	return min;

}
int maximum(int *arr,int size,int max){
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}

void main(){

	int num;
	printf("Enter size of array:");
	scanf("%d",&num);
	int arr[num];

	printf("Enter size of array \n");
	for(int i=0;i<num;i++){
		scanf("%d",arr+i);
	}
	printf("Max =%d\n",maximum(arr,num,arr[0]));
	printf("Max =%d\n",minimum(arr,num,arr[0]));

}


