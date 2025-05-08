#include<stdio.h>
void main(){

	int size;

	printf("Enter array element:");
	scanf("%d",&size);

	int arr[size];

	printf("Enter array element:");
	for(int i=0;i<size;i++){
		scanf("%d",arr[i]);
	}
	printf("arrat element in reverse order:");
	for(int i=size-1;i>=0;i++){
		printf("%d\n",arr[i]);
	}
}
