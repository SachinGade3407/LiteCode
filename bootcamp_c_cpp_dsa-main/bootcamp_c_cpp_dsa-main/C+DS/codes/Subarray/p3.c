// Given an array of size N print sum of every single subarray using prefix sum technique
 
#include<stdio.h>
void main(){

        int arr[]={2,4,1,3};
	int psum[4];

	for(int i=1;i<4;i++){
		psum[i]=psum[i-1]+arr[i];
	}
	for(int i=0;i<4;i++){
		for(int j=i;j<4;j++){
			int sum=0;
			if(i==0){
				sum=psum[j];
			}else{
				sum=psum[i]-psum[i-1];
				printf("%d\n",sum);
			}
		}
	}
}


