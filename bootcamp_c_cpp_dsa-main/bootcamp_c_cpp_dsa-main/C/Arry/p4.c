/* Given a ramdom set of numbers ,printf the im sorted order.
 * i/p:arr[]={1,5,8,9,4,5,6}
 * o/p:{1,4,5,6,8,9}
 */

#include<stdio.h>
void arrsort(int * arr,int num,int x){
	int temp=0;
	

	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			if(x==1){
				if(arr[i]<arr[j]){
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
			else if(x==2){
				if(arr[i]>arr[j]){
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
	}
}
void main(){
	int num;
	printf("Enter size of array:");
	scanf("%d",&num);
	int arr[num];

	printf("Enter element of array\n");

	for(int i=0;i<num;i++){
		scanf("%d",arr+i);
	}
	int x;
	printf("How to sort the array?\n");
	printf("1)ascending\n");
	printf("2)desending\n");
	scanf("%d",&x);

	if(x==1||x==2){
		arrsort(arr,num,x);
		printf("sorted array is:");
		for(int i=0;i<num;i++){
			printf("%d",arr[i]);
		}
		printf("\n");
	}else{
		printf("Invalid Input\n");
	}
}



