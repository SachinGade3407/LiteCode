#include<stdio.h>
void main(){

	int size; 
	int count,count1=0;

	printf("Enter array size:");
	scanf("%d",&size);

	int iarr[size];

	printf("Enter array element:");
	for(int i=0;i<size;i++){
		scanf("%d",&iarr[i]);
	}
	

	for(int i=0;i<size;i++){
		if(iarr[i]%2==0){
			count++;

		}else{
			count1++;
		}
	}
	printf("Count of even num in an array is:%d\n",count);

	printf("Count of odd num is an array is :%d\n",count1);
}

