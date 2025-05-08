// Bubble sort on array using single for loops 

# include <stdio.h>
int bubbleS (int arr[],int size) {
	int i=0 ;
	for (int j=0 ;  ; j++) {
		if (i==size-2)
			break ;
	
		if (arr[j]>arr[j+1]) {
			int temp=arr[j] ;
				arr[j]=arr[j+1] ;
				arr[j+1]=temp ;
			//arr[j]=arr[j]+arr[j+1] ;
			//arr[j+1]=arr[j]-arr[j+1] ;
			//arr[j]=arr[j]-arr[j+1] ;  
		}
		if (j==size-2) {
			i++ ;
			j=0 ;
		}
		/*if (i==size-2)
			break ;  */

	}
	return 0 ;
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

        bubbleS(arr,size) ;
    
        printf("Array after sorting\n") ;
        for (int i=0 ; i<size ; i++) {
                printf("%d ",arr[i]) ;
	}
	printf("\n") ;
}
