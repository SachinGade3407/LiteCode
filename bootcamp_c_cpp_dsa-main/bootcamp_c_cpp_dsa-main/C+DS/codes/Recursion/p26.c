/* Reverse number  */
# include <stdio.h>
int Nrev (int num) {
	int rev=0 ;
	while (num!=0) {
	int rem=num%10 ;
		rev=rev*10+rem ;
		num=num/10 ;
	}
	return rev ;
}
void main () {
	int num ;
	printf("Enter number\n") ;
	scanf("%d",&num) ;

	int ret=Nrev(num) ;
	printf("Reverse number is %d\n",ret) ;
}


