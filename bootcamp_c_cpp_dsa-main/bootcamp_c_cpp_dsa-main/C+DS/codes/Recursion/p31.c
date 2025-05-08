/* Check array is same or not  */
# include <stdio.h>
# include <string.h>
# include <stdbool.h>
bool compA (char str1[],char str2[],int len) {
	for (int i=0 ; i<len ; i++) {
		if (str1[i]!=str2[i])
			return false ;
	}
	return true ;
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
	
	if (strlen(arr1)!=strlen(arr2))
			printf("Not same\n") ;
	else {
		bool ret=compA(arr1,arr2,size1) ;
		if (ret==true) 
		printf("Same\n") ;
		else 
		printf("Not same\n") ;
	}
}

