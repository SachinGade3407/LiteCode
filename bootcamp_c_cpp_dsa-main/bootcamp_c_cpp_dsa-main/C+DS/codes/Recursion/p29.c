# include <stdio.h>
# include <stdbool.h>
int count=0 ;
bool demo (int arr[],int size) {
	if (size==1) 
		return false ;
	if (count>=2) 
		return true ;
	if (arr[size-1]%2==0) {
		count++ ;
		return demo(arr,size-1) ;
	}
	if (arr[size-1]%2!=0) 
		return demo(arr,size-1) ;
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

	bool ret=demo(arr,size) ;
	if (ret==true) 
		printf("Found\n") ;
	else 
		printf("Not found\n") ;
}

