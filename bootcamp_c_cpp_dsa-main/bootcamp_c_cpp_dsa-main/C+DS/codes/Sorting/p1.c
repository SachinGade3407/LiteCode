// Bubble sort on array using two for loops 

# include <stdio.h>
int bubbleS (int arr[],int size) {
	for (int i=0 ; i<size-1 ; i++) {
		for (int j=0 ; j<size-1-i ; j++) {
			if (arr[j]>arr[j+1]) {
				//Swap
				int temp=arr[j] ;
				arr[j]=arr[j+1] ;
				arr[j+1]=temp ;
			}
		}
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
