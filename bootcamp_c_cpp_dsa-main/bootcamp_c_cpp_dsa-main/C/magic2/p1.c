#include<stdio.h>
void main(){

	int size ,search;

	printf("Enter size:");
	scanf("%d",&size);

	int flag=0;
	int arr[size];

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter elements to search:");
	scanf("%d",&search);

	for(int i=0;i<size;i++){
		if(search==arr[i]){
			flag=1;
		}
	}

		if (flag==1){


		
		printf("%d is present",search );
	}else{
		printf("%d is not present",search);
	}
	
}
	
	
