#include<stdio.h>

int Goodpair(int *arr,int size,int num){
	for(int i=0;i<size-1;i++){
		
		int j=i+1;
			if(num==arr[i]+arr[j]){
				return 1;
			}
		}
		return 0;
	
		
}
void main(){

        int size;
        printf("Enter size\n");
        scanf("%d",&size);
        int arr[size];
        printf("Enter arrayelements\n");
        for(int i=0;i<size;i++){
                scanf("%d",&arr[i]);
        }
	int num;
	printf("Enter number\n");
	scanf("%d",&num);
	int ret=Goodpair(arr,size,num);
	if(ret==0){
		printf("%d = pair not found\n",ret);
	
	}else{
		printf("%d = pair found\n",ret);
	}
}


