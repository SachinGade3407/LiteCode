/* Sort array with number of factors of number*/
# include <stdio.h>
void selectionS (int arr[],int size) {
	for (int i=0 ; i<size-1 ; i++) {
		int minI=i ;
		int count1=0 ;
		int count2=0 ;
		for (int j=i+1 ; j<size ; j++) {
			for (int k=1 ; k<=arr[minI] ; k++) {
				if (arr[minI]%k==0) 
					count1++ ;
			}
			for (int k=1 ; k<=arr[j] ; k++) {
				if (arr[j]%k==0)
					count2++ ;
			}
			if (count1>count2) 
				minI=j ;
			if (count1==count2) {
				if (arr[minI]>arr[j])
					minI=j ;
			}
		}
		int temp=arr[i] ;
		arr[i]=arr[minI] ;
		arr[minI]=temp ;
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

