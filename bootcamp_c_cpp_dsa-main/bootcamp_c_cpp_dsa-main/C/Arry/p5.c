/*Given an unsort array arr[] of size N having both negative and positivve intergers.The task is place all negative element at the end of array without changing the order of positive element and negative elements. input :n=8
 * arr[]={1,-1,3,2,-7,-5,11,6} output:1 2 3 11 6 -1 -7 -5
 */


#include<stdio.h>
void arrArrange(int * arr1,int * arr2,int num){
	int a=0;
	for(int i=0;i<num;i++){
		if(arr1[i]>=0){
			arr2[a]=arr1[i];
			a++;
		}
	}
	for(int i=0;i<num;i++){
		if(arr1[i]<0){
			arr2[a]=arr1[i];
			a++;}
	}
}
void main(){
	int num;

	printf("Enter size of array :");
	scanf("%d",&num);

	int arr1[num];
	int arr2[num];

	printf("Enter element of array\n");
	for(int i=0;i<num;i++){
		scanf("%d",arr1+i);
	}
	arrArrange(arr1,arr2,num);
	printf("Rearranged array is :");
	for(int i=0;i<num;i++){
		printf("%d",arr2[i]);
	}
	printf("\n");
}



