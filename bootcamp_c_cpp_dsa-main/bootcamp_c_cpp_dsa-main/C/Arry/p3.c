/* Given an array A of size N , printf the reverse of it.
 * example: Input 1.1 2 3 4
 * output: 4 3 2 1*/



#include<stdio.h>
void arrReverse(int * arr,int num){
	int temp=0;
	for(int i=0;i<num/2;i++){
		temp=arr[i];
		arr[i]=arr[num-1-i];
		arr[num-1-i]=temp;
	}
}
void main(){
	int num;
	printf("Enter size of array:");
	scanf("%d",&num);
	int arr[num];
	printf("Enter element of array\n");
	for(int i =0;i<num;i++){
	scanf("%d",arr+i);
	}
	arrReverse(arr,num);
	printf("Reverse array is :");
	for(int i=0;i<num;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}


