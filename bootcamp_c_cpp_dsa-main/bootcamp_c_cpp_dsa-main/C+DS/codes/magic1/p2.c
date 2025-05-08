#include<stdio.h>
#include<stdlib.h>

void main(){

	int r;

	printf("Enter rows of elements:");
	scanf("%d",&r);

	int c;
	printf("Enter cloumns of array:");
	scanf("%d",&c);

	int *arr=malloc(r*c*sizeof(int));

	printf("Enter elements of array\n");
	for(int i=0;i<r*c;i++){

		scanf("%d",arr+i);
		
		printf("Elements of array are:\n");
		for(int i=0;i<r*c;i++){
			
			printf("%d\n",*(arr+i));
		}
	}
}


