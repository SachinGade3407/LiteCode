#include<stdio.h>
void main(){

	int size;
	printf("Enter size of an array\n");
	scanf("%d",&size);

	int arr[size];

	printf("Enter array element:\n");
	for(int i=0;i<size;i++){

		scanf("%d",&arr[i]);
	}
	printf("Element are:\n");
	for(int j=0;j<size;j++){
		printf("%d\n",arr[j]);
	}
}

