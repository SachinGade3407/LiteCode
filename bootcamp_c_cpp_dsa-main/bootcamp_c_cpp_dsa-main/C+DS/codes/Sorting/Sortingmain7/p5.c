//Quick sort
//Approch number 1:Lompto Approch

# include <stdio.h>
void swap (int *ptr1,int *ptr2) {
	int temp=*ptr1 ;
	*ptr1=*ptr2 ;
	*ptr2=temp ;
}
int partition (int arr[],int start,int end) {
	int pivot=arr[end] ;
	int itr=start-1 ;
	for (int i=start ; i<end ; i++) {
		if (arr[i]<pivot) {
			itr++ ;
			swap(&arr[i],&arr[itr]) ;
		}
	}
	swap(&arr[itr+1],&arr[end]) ;
	return (itr+1) ;
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


