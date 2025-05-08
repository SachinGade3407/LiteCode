//print all subarray
#include<stdio.h>
void main(){

	int arr[]={4,2,1,3};
	int count=0;

	for(int i=0;i<4;i++){
		for(int j=i;j<4;j++){
			for(int k=i;k<=j;k++){
				printf("%d\n",arr[k]);
				
			}
			count++;

			printf("\n");
		}
	
	}
	printf("Count=%d",count);
}
