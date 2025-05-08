//Insertion sort

# include <stdio.h>
void insertionS (int arr[],int size) {
	for (int i=1 ; i<size ; i++) {
		int store=arr[i] ;
		int j=i-1 ;
		for ( ; j>=0 && arr[j]>store ; j--) {
			arr[j+1]=arr[j] ;
		}
		arr[j+1]=store ;
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

        insertionS(arr,size) ;

        printf("Array after sorting\n") ;
        for (int i=0 ; i<size ; i++) {
                printf("%d ",arr[i]) ;
	}
	printf("\n") ;
}
