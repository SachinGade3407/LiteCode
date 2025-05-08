#include<stdio.h>
void bubblesort(int arr[],int size){
	for(int i=0; i<size-1; i++){
		
		for(int j=0; j<size-i-1; j++){
			
			if(arr[j]>arr[j+1]){
				
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}	
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

	bubblesort(arr,size);
	
	printf("Sorted Array Are\n");
	for(int i=0; i<size; i++){
		printf("%d\t\n",arr[i]);
	}
}
