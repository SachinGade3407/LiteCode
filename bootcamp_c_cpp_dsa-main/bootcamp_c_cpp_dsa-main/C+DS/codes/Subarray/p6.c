#include<stdio.h>
void main(){

	int arr[]={2,4,1,3};
	int maxsum=arr[0];

	for(int i=0;i<4;i++){
		int sum=0;
		for(int j=i;j<4;j++){
			sum=sum+arr[j];
			if(maxsum<sum)
				maxsum=sum;
		}
	}
	printf("max subarray sum=%d\n",maxsum);
}
