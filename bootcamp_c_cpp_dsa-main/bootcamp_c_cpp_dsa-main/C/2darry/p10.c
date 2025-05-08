// a to p


#include<stdio.h>
void main(){

	int x=10;
	int y=20;
	int z=30;

	int *arr[3]={&x,&y,&z};
	printf("%ld\n",arr);
	printf("%d\n",arr[0]);
	printf("%d\n",arr[1]);
	printf("%d\n",arr[2]);

	printf("%d\n",*(arr[0]));
	printf("%d\n",*(arr[1]));
	printf("%d\n",*(arr[2]));

}

