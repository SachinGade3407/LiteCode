// kadane's Algorithm


#include<stdio.h>
void main(){

	int arr[]={1,2,-3,-4,5,-6,7,-8,9};
	int sum=0;
	int max=0;

	for(int i=0i;i<10;i++){
		sum=sum+arr[i];
		if(sum<0)
			sum=0;
		if(max<sum)
			max=sum;
	}
	printf("max subarray sum=%d\n",max);
}
