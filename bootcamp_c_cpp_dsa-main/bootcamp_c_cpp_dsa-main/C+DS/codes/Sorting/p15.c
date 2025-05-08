/* Using merge Sort check whether given array is consective or not
 * Input:A={1,2,3,4,5,6}
 * Output:Truee
 * Input:A={1,2,4,5,6,7}
 * Output:False
 * Hint=difference between each element(sorted elements) is one   */
# include <stdio.h>
void merge (int arr[],int start,int mid,int end) {
	int size1=mid-start+1 ;
	int size2=end-mid ;

	int arr1[size1] ;
	int arr2[size2] ;

	for (int i=0 ; i<size1 ; i++) {
		arr1[i]=arr[start+i] ;
	}
	for (int i=0 ; i<size2 ; i++) {
		arr2[i]=arr[mid+1+i] ;
	}

	int itr=start ;
	int itr1=0 ;
	int itr2=0 ;
	while (itr1<size1 && itr2<size2) {
		if (arr1[itr1]<arr2[itr2]) {
			arr[itr]=arr1[itr1] ;
			itr1++ ;
		}
		else {
			arr[itr]=arr2[itr2] ;
			itr2++ ;
		}
		itr++ ;
	}
	while (itr1<size1) {
		arr[itr]=arr1[itr1] ;
		itr1++ ;
		itr++ ;
	}
	while (itr2<size2) {
		arr[itr]=arr2[itr2] ;
		itr2++ ;
		itr++ ;
	}
}
void mergesort (int arr[],int start,int end) {
	if (start<end) {
		int mid=(start+end)/2 ;
		mergesort(arr,start,mid) ;
		mergesort(arr,mid+1,end) ;
		merge(arr,start,mid,end) ;
	}
}
void printArray (int arr[],int size) {
	for (int i=0 ; i<size ; i++) {
		printf("%d ",arr[i]) ;
	}
	printf("\n") ;
}
int flag=1 ;
int check (int arr[],int start,int mid,int end) {
	int size1=mid-start+1 ;
	int size2=end-mid ;

	int arr1[size1] ;
	int arr2[size2] ;

	for (int i=0 ; i<size1 ; i++) {
		arr1[i]=arr[start+i] ;
	}
	for (int i=0 ; i<size2 ; i++) {
		arr2[i]=arr[mid+1+i] ;
	}

	int itr1=0 ;
	int itr2=0 ;
	while (itr1<size1-1) {
		if (arr1[itr1+1]-arr1[itr1]==1) {
			itr1++ ;
		}
		else {
			flag=0 ;
			return 0 ;
		}
	}
	while (itr2<size2-1) {
		if (arr2[itr2+1]-arr2[itr2]==1) {
			itr2++ ;
		}
		else {
			flag=0 ;
			return 0 ;
		}
	}

}
void consective (int arr[],int start,int end) {
	if (start<end) {
		int mid=(start+end)/2 ;
		consective(arr,start,mid) ;
		consective(arr,mid+1,end) ;
		check(arr,start,mid,end) ;
	}
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

        mergesort(arr,0,size-1) ;

	printf("Array elements after sorting sorting\n") ;
	printArray(arr,size) ;

	consective(arr,0,size-1) ;
	if (flag==1)
		printf("Array is consective\n") ;
	else 
		printf("Array is not consective\n") ;

}
