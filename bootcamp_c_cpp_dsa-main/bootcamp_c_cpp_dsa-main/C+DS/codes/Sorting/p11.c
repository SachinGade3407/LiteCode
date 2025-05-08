#include<stdio.h>
void insort(int arr[], int size){
	
	for(int i=1; i<size; i++){
		
		int val=arr[i];

		int j=i-1;

		while(j>=0 && arr[j]>val){
			
			arr[j+1] = arr[j];
			
			j--;
		}
		arr[j+1] = val;
	}
}
void main(){
	
	int size;
	printf("Enter Size of an Array\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter Element\n");
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}

	insort(arr,size);
	
	printf("Sorted Element Are\n");
	for(int i=0; i<size; i++){
		printf("%d\n",arr[i]);
	}
}	
