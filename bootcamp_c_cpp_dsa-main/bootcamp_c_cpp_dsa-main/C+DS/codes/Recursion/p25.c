/* Count number of steps inolved in numnber using recursion */
# include <stdio.h>
int cstep (int num) {
	if (num==0) 
		return 0 ;
	if (num%2==0) 
		return cstep(num/2)+1 ;
	if (num%2!=0)
		return cstep(num-1)+1 ;
}
void main () {
	int num ;
	printf("Enter number\n") ;
	scanf("%d",&num) ;

	int ret=cstep(num) ;
	printf("Number of step are %d\n",ret) ;
	
}


