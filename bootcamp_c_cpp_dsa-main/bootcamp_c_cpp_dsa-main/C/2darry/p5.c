#include<stdio.h>
void main(){

	int arr[2][3];
	printf("Enter element:");
	for(int row=0;row<2;row++){

		for(int col=0;col<3;col++){

			scanf("%d",&arr[row][col]);
		}
	}
	for(int row=0;row<2;row++){
                
                for(int col=0;col<3;col++){
                        
                        printf("%d ",arr[row][col]);
		}
	printf("\n");
	}
}

