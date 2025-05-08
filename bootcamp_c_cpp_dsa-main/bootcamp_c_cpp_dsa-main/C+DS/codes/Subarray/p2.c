//Given an array of size N  print the sum of every single subarray


#include<stdio.h>
void main(){

	int arr[]={2,4,1,3};

	for(int i=0;i<4;i++){
		for(int j=i;j<4;j++){
			int sum=0;
			for(int k=i;k<=j;k++){
				sum=sum+arr[k];
			}
			printf("%d\n",sum);
		}
	}
}

