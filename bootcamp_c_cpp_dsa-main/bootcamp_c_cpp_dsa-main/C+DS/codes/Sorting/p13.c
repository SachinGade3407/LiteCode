/* Take two arrays by user(unsorted array) and merge them
 * in third array in sorted way                      */

# include <stdio.h>
void bubbleS (int arr[],int size) {
	for (int i=0 ; i<size-1 ; i++) {
		for (int j=0 ; j<size-i ; j++) {
			if (arr[j]>arr[j+1]) {
				int temp=arr[j] ;
				arr[j]=arr[j+1] ;
				arr[j+1]=temp ;
			}
		}
	}
}
void mergeA(int arr1[],int arr2[],int m,int n,int arr3[],int size) {
	bubbleS(arr1,m) ;
	bubbleS(arr2,n) ;
	
	int j=0 ;
	int k=0 ;
	for (int i=0 ; i<m+n ; i++) {
		if (j<=m-1 && k<=n-1) {
			if (arr1[j]<=arr2[k]) {
				arr3[i]=arr1[j] ;
				j++ ;
			}
			else {
				arr3[i]=arr2[k] ;
				k++ ;
			}
		}
		else {
			if (j==m && k<n) {
				arr3[i]=arr2[k] ;
				k++ ;
			}
		
			else if (k==n && j<m) {
				arr3[i]=arr1[j] ;
				j++ ;
			}
		}
	} 
}
void main () {
        int m ;
        printf("Enter size of first array\n") ;
        scanf("%d",&m) ;

        int arr1[m] ;
        printf("Enter elements in first array\n") ;
        for (int i=0 ; i<m ; i++) {
                scanf("%d",&arr1[i]) ;
        }

        int n ;
        printf("Enter size of second array\n") ;
        scanf("%d",&n) ;

        int arr2[n] ;
        printf("Enter elements in second array\n") ;
        for (int i=0 ; i<n ; i++) {
                scanf("%d",&arr2[i]) ;
        }
	
	int arr3[m+n] ;
	int size=m+n ;
	mergeA(arr1,arr2,m,n,arr3,size) ;
	printf("Merged third array is as follow\n") ;
	for (int i=0 ; i<size ; i++) {
		printf("%d ",arr3[i]) ;
	}
	printf("\n") ;
}
