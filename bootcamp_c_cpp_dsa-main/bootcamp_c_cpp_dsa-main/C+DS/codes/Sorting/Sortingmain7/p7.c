//Quick sort
//Approch number 3:Naive Approch

# include <stdio.h>
int partition (int arr[],int start,int end) {
	int tempA[(end-start+1)] ;
	int pivot=arr[end] ;
	int index=0 ;
	for (int i=start ; i<end ; i++) {
		if (arr[i]<=pivot)
			tempA[index++]=arr[i] ;
	}
	int pos=index+start ;
	tempA[index++]=pivot ;
	for (int i=start ; i<end ; i++) {
		if (arr[i]>pivot)
			tempA[index++]=arr[i] ;
	}
	for (int i=start ; i<=end ; i++) {
		arr[i]=tempA[i-start] ;
	}
	return pos ;
}
void quicksort (int arr[],int start,int end) {
	if (start<end) {
		int pivot=partition(arr,start,end) ;
		quicksort(arr,start,pivot-1) ;
		quicksort(arr,pivot+1,end) ;
	}
}
void printArray (int arr[],int size) {
	for (int i=0 ; i<size ; i++) {
		printf("%d ",arr[i]) ;
	}
	printf("\n") ;
}
void main () {
        int size ;
        printf("Enter size of an array\n") ;
        scanf("%d",&size) ;

        int arr[size] ;
        printf("Enter elements in an array\n") ;
        for (int i=0 ; i<size ; i++) {
                scanf("%d",&arr[i]) ;
        }

	printf("Array elements before sorting\n") ;
	printArray(arr,size) ;

        quicksort(arr,0,size-1) ;

	printf("Array elements after sorting sorting\n") ;
	printArray(arr,size) ;
}


