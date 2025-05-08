//p to p

#include<stdio.h>
void main(){

	int x=10;
	int *iptr1=&x;
	int *iptr2=iptr1;
	int **iptr=&iptr1;

	printf("%d\n",x);
	printf("%d\n",*iptr1);
	printf("%d\n",*iptr2);
	printf("%ls\n",*iptr);
}


