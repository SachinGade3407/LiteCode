/* An element is called a oeak element if its value is not smaller than the value of its adjacent element (if they exists).Given an arry arr[] of size N,Return the index of any one of its peak element.Note:The generated output will always be 1 if the index htat you return is correct.Otherwise outpu will be 0.Ex1: Input:N=3 arr[]={1,2,3}possible answer:2 Generated output:1 Explanation:index 2is 3.It is the peak element as it is generated output will be else 0.*/



#include<stdio.h>
int peekElement(int * arr,int num){

	int max =0;
	for(int i=0;i<num;i++){
		if(arr[i]>arr[max]){
			max=i;
		}
	}
	return max;
}
void main(){

	int num;
	printf("Enter size of array:");
	scanf("%d",&num);
	int arr[num];
	printf("Enter element of array\n");
	for (int i=0;i<num;i++){
		scanf("%d",arr+i);
	}
	printf("Peak element is %d\n",peekElement(arr,num));
}


