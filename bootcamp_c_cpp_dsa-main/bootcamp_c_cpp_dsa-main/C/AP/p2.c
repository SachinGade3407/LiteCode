#include<stdio.h>
void main(){

	int size;
	int search;
	printf("Enter Array size:\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter element:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	int flag =0;
	for(int i=0;i<size;i++){
		if(search==arr[i]){
			flag=1;
		}
	}
	if(flag==1){
		printf("found\n");
	}else{
		printf("not found\n");
	}
}
