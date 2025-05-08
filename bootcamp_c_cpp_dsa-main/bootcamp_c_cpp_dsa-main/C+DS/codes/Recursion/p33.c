/* Check array is same or not upto N index using recursion */
# include <stdio.h>
# include <string.h>
# include <stdbool.h>
int i=0 ;
bool NcompA (char str1[],char str2[],int N) {
	if (i==N) 
		return true ;

	if (str1[i]==str2[i]) {
		i++ ;
		return NcompA(str1,str2,N)  ;
	}

	if (str1[i]!=str2[i]) 
		return false ;
}
void main () {
	int size1 ;
	printf("Enter size of a first array\n") ;
	scanf("%d",&size1) ;

	char arr1[size1] ;
	printf("Enter elements in an array\n") ;
	for (int i=0 ; i<size1 ; i++) {
		scanf(" %c",&arr1[i]) ;
	}

	int size2 ;
	printf("Enter size of a second array\n") ;
	scanf("%d",&size2) ;

	char arr2[size2] ;
	printf("Enter elements in an array\n") ;
	for (int i=0 ; i<size2 ; i++) {
		scanf(" %c",&arr2[i]) ;
	}
	
	int N ;
	printf("Enter number upto which compare array\n") ;
	scanf("%d",&N) ;

	bool ret=NcompA(arr1,arr2,N) ;
	if (ret==true) 
		printf("Same\n") ;
	else 
		printf("Not same\n") ;
	
}

