#include<stdio.h>
#include<stdlib.h>

void main(){

	int r;
	printf("Enter size of array :");
	scanf("%d",&r);

	float *arr = malloc(r*sizeof(float));

	printf("Enter elements of array\n");
	for(int i=0; i<r; i++){

		scanf("%f",arr+i);

		printf("Elemnts of array are:\n");
		for(int i=0; i<r; i++){

			printf("%f",*(arr+i));
		}
		printf("\n");
	}
}


