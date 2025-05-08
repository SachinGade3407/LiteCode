#include<stdio.h>
void selectionsort(int arr[],int size){

	for(int i=0; i<size ; i++){

		int minIndex=i;
		
		for(int j=i+1; j<size; j++){
			
			if(arr[minIndex]>arr[j]){
				
				minIndex=j;
			}
		}
			//Swap Function
			int temp=arr[i];
			arr[i]=arr[minIndex];
			arr[minIndex]=temp;
	}

}
void main(){
	
	int size;
	printf("Enter size\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter Element for an Array:\n");
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}

	selectionsort(arr,size);

	printf("Sorted Array Using Selection Sort\n");
	for(int i=0; i<size; i++){
		printf("%d\n",arr[i]);
	}
}

