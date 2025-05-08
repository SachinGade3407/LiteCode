//Selection Sort

# include <stdio.h>
void selectionS (int arr[],int size) {
	for (int i=0 ; i<size-1 ; i++) {
		int minIndex=i ;
		for (int j=i+1 ; j<size ; j++) {
			if (arr[minIndex]>arr[j])
				minIndex=j ;
		}
		int temp=arr[i] ;
		arr[i]=arr[minIndex] ;
		arr[minIndex]=temp ;
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

        selectionS(arr,size) ;

        printf("Array after sorting\n") ;
        for (int i=0 ; i<size ; i++) {
                printf("%d ",arr[i]) ;
	}
	printf("\n") ;
}
