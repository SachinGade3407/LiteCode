/* Count number of steps inolved in numnber */
# include <stdio.h>
int cstep (int num) {
	int count=0 ;
	while (num!=0) {
		if (num%2==0) {
			num=num/2 ;
			count++ ;
		}
		else {
			num=num-1 ;
			count++ ;
		}
	}
	return count ;
}
void main () {
	int num ;
	printf("Enter number\n") ;
	scanf("%d",&num) ;

	int ret=cstep(num) ;
	printf("Number of step are %d\n",ret) ;
}


