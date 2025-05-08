/* Count occurence of zero in given number using recursion */
# include <stdio.h>
int czero (int num) {
	if (num==0) 
		return 0 ;
	if (num%10==0) 
		return czero(num/10)+1 ;
	if (num>0)
		return czero(num/10) ;
}
void main () {
	int num ;
	printf("Enter number\n") ;
	scanf("%d",&num) ;

	if (num==0) 
		printf("zero occures 1 time\n") ;
	else {
		int ret=czero(num) ;
		printf("zero occures %d time\n",ret) ;
	}
}


