#include<stdio.h>
void main(){


	int size;
	printf("Enter arry size:");
	scanf("%d",&size);

	int arr[size];
	printf("Enter arry elements:");
	scanf("%d",&arr[i]);

	for(int i=0;i<size;i++){
		scanf("%d",&arr[1]);
	}
	for(int i=0;i<size;i++){
		printf("%d\n",arr[i]);
		printf("%d\n",*(arr+i));
	}
}
