/* Count occurence of zero in given number */
# include <stdio.h>
int czero (int num) {
	int count=0 ;
	while (num!=0) {
		int rem=num%10 ;
		if (rem==0) 
			count++ ;
		num=num/10 ;
	}
	return count ;
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


