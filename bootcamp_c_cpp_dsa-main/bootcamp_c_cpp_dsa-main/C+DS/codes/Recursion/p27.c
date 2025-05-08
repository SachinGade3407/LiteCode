# include <stdio.h>
# include <stdbool.h>
bool demo (int arr[],int size) {
	int count=0 ;
	for (int i=0 ; i<size ; i++) {
		if (arr[i]%2==0)
			count++ ;
		if (count>=2)
			return true ;
	}
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

	bool ret=demo(arr,size) ;
	if (ret==true) 
		printf("Found\n") ;
	else 
		printf("Not found\n") ;
}

