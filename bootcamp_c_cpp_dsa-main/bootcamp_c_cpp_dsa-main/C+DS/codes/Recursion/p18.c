//recursion in array
// sum of array elements


#include<stdio.h>
int sumArray(int arr[],int size){
	if(size==0){
		return -1;
	}
	if(size==1){
		return arr[size-1];
	}
	return sumArray(arr,size-1)+arr[size-1];
}

void main(){

	int size;
	printf("enter the array size\n");
	scanf("%d",&size);

	int arr[size];
	printf("enter the arra elemsnts\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("array elements are:\n");
	for(int i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}
	int ret=sumArray(arr,size);
	printf("the sum of array elements is%d\n",ret);
}


