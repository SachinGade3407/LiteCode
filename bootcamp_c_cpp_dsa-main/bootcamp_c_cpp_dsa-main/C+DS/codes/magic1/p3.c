#include<stdio.h>
#include<stdlib.h>

void main(){

	int p;
	printf("Enter planes of array :");
	scanf("%d",&p);

	int r;
	printf("Enter rows of array:");
	scanf("%d",&r);

	int c;
	printf("Enter columns of array :");
	scanf("%d",&c);

	int *arr=malloc(p*r*c*sizeof(int));

	printf("Enter elements of array\n");
	for(int i=0;i<p*r*c;i++){

		scanf("%d",arr+i);
	}
	printf("Elements of array are :\n");

	for(int i=0;i<p*r*c;i++){

		printf("%d\n",*(arr+i));
	}
}



