#include<stdio.h>
void main(){

	int size;
	printf("Enter the size:\n");
	scanf("%c"&size);

	int arr[size];
	printf("Enter array elements:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++){
		if(arr[i]%2==0){
			printf("%d\t",arr[i]*arr[i]);
		}else{
			printf("%d\t",arr[i]*arr[i]*arr[i]);
		}
	}
	printf("\n");
}

