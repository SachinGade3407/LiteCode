/* Sort array which having string elements 
 * by length
 * Input-Ashish,Kanha,Rahul,Raj,Anuj,Shashi
 * Output-Raj,Anuj,Kanha,Rahul,Ashish,Shashi   */

# include <stdio.h>
# include <string.h>
void bubbleS (int m,int n,char arr[m][n]) {

	for (int i=0 ; i<m-1 ; i++) {

		for (int j=0 ; j<m-1-i ; j++) {
			
			if (strlen(arr[j])>strlen(arr[j+1])) {
			//Both working	
			/*	char temp[n] ;
				strcpy(temp,arr[j]) ;
				strcpy(arr[j],arr[j+1]) ;
				strcpy(arr[j+1],temp) ;	 */
			char temp1[n] ;
                        char temp2[n] ;
                        strcpy(temp1,arr[j]) ;
                        strcpy(temp2,arr[j+1]) ;
                        strcpy(arr[j],"\0") ;
                        strcpy(arr[j+1],"\0") ;
                        strcpy(arr[j],temp2) ;
                        strcpy(arr[j+1],temp1) ; 
			}
		}
	}
}
	
void main () {
	int m ;
	printf("Enter number of elements\n") ;
	scanf("%d",&m) ;

	int n ;
	printf("Enter average string length\n") ;
	scanf("%d",&n) ;

	char arr[m][n] ;

	printf("Enter elements in string array\n") ;
	for (int i=0 ; i<m ; i++) {
		scanf("%s",arr[i]) ;
	}

	printf("Elements in array are\n") ;
	for (int i=0 ; i<m ; i++) {
		printf("%s ",arr[i]) ;
	}
	printf("\n") ;
	
	bubbleS(m,n,arr) ;
	printf("Elements in array after sorting are\n") ;
	for (int i=0 ; i<m ; i++) {
		printf("%s ",arr[i]) ;
	}
	printf("\n") ;
}

