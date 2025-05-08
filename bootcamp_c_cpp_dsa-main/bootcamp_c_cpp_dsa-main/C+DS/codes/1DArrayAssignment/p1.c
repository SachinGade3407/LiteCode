#include<stdio.h>

int count(int arr[],int size,int count1){
	int store=arr[0];
	for(int i=0;i<size;i++){
		if(store<arr[i]){
			store<arr[i];
			count1++;
		}
	}
	return count1-1;
}
void main(){

	int size;
	int count1=0;
	printf("Enter size\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter arrayelements\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int ret=count(arr,size,0);
	printf("%d\n",ret);
}
