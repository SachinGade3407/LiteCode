//Quick sort
//Approch number 2:Haore's Approch

# include <stdio.h>
int partition (int arr[],int start,int end) {
	int pivot=arr[start] ;
	int i=start-1 ;
	int j=end+1 ;
	while (1) {
		do {
			i++ ;
		}
		while (arr[i]<pivot) ;
		do {
			j-- ;
		}
		while (arr[j]>pivot) ;
		if (i>=j)
			return j ;
		int temp=arr[i] ;
		arr[i]=arr[j] ;
		arr[j]=temp ;
	}
}
void quicksort (int arr[],int start,int end) {
	if (start<end) {
		int pivot=partition(arr,start,end) ;
		quicksort(arr,start,pivot) ;
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


