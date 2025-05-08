#include<stdio.h>
void main(){
	
	int size1;
	printf("Enter array size:");
	scanf("%d",&size1);

	int arr1[size1];
	int arr2[size1];

	printf("Enter element of first");
	for(int i=0;i<=size1;i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter element of search array:");
	for(int i=0;i<size1;i++){
		scanf("%d",&arr2[i]);
	}
	for(int i=0;i<size1;i++){
		printf("%d",arr1[i]+arr2[i]);
	}
}
