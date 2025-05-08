/* given two non emptry array of intergers, write a function that determinnes when their the second aray is a subsequence of the first one.
 * A sequence of an array is a set of number that aern't necessarily adjecent in the array but that are in the same order as they appers in the array . For  instance the number [1 2 3] from a subsequence of the array [ 1 2 3 4 ], andso do the nunber [2 4 ].Note that a single number in an array and the araitself are both valid subsequence of the array.
 * ip: arr=[5 1 22 25 6 -1 8 10]
 * sequences =[1 6 -1 10]
 * op:true
 * */


#include<stdio.h>
#include<stdbool.h>

bool subArray(int * arr ,int *seq,int num1,int num2){

	int count =0;
	int a=0;

	for(int i=0;i<num1;i++){

		if(arr[i]== seq[a]){
			count++;
			a++;
		}
	}
	if(count==num2){
		return true;
	}else{
		return false;
	}
}
void main(){
	int num1,num2;
	printf("Enter size of array :");
	scanf("%d",&num1);
	int arr[num1];
	printf("Enter element of arry\n");
	for(int i=0;i<num1;i++){
		scanf("%d",arr+i);
	}
	printf("Enter size of subsequence :");
	scanf("%d",&num2);
	int seq[num2];

	printf("Enter element of subsequence \n");

	for(int i=0;i<num2;i++){
		scanf("%d",seq+i);
	}
	printf("Output:%d\n",subArray(arr,seq,num1,num2));
}

