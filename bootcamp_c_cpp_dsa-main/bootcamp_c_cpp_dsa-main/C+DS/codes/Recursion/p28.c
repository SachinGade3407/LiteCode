/* Reverse number using recursion */
# include <stdio.h>
int rev=0 ;
int Nrev (int num) {
	if (num==0) 
		return 0 ;
	if (num>0) {
		rev=rev*10+(num%10) ;
		return Nrev(num/10) ;
	}	
}
void main () {
	int num ;
	printf("Enter number\n") ;
	scanf("%d",&num) ;

	Nrev(num) ;
	printf("Reverse number is %d\n",rev) ;
}


