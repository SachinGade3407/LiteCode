#include<stdio.h>
void main(){

	int x=10;
	int y=20;
	printf("x=%d\n",x);
	printf("y=%d\n",y);

	swap(&x,&y);
	printf("X=%d\n",x);
	printf("y=%d\n",y);
}
void swap(int *x,int *y){

	printf("X=%d\n",*x);
        printf("y=%d\n",*y);

	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("X=%d\n",*x);
        printf("y=%d\n",*y);
}



