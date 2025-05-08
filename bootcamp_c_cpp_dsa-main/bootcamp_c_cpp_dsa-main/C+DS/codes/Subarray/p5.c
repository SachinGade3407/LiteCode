//Maximum Subarray:Brute force APPROCH 1


#include<stdio.h>
void main(){

	int arr[]={2,4,1,3};
	int maxsum=0;

	for(int i=0;i<4;i++){
		for(int j=i;j<4;j++){
			int sum=0;
			for(int k=i;k<=j;k++){
				sum=sum+arr[k];
			}if(maxsum<sum){
				maxsum=sum;
			}
		}
	}
 	printf("Max subarray sum=%d\n",maxsum);
}


