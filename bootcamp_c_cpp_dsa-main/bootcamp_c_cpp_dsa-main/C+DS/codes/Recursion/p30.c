/* Check array is sorted or not using recursion */
# include <stdio.h>
# include <stdbool.h>
bool sort (int arr[],int size) {
	if (size==1) 
		return true ;

	if (arr[size-1]>=arr[size-2]) 
		return sort(arr,size-1)  ;

	if (arr[size-1]<arr[size-2]) 
		return false ;
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

	bool ret=sort(arr,size) ;
	if (ret==true) 
		printf("Array is sorted\n") ;
	else 
		printf("Array is not sorted\n") ;
}

