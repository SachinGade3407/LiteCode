/* Stack*/

#include<stdio.h>
void main(){

	int size;

	int sum=0;
	
	printf("Enter arry size:\n");
	scanf("%d",&size);

	int arr[size];

	printf("Enter arry Element:\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Arry Element are\n");

	for(int i=0;i<size;i++){
	       
		sum=sum+arr[i];
	}
	printf("sum=%d\n",sum);
}


