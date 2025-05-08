#include<stdio.h>
void main(){

	int temp =1;
	int arr[0];
	int x;
	scanf("%d\n",&x);
	for(int i=0;i<10;i++){
		arr[i]=x*temp;
		temp=temp+1;
		for(int j=0;j<10;j++){
			printf("%d\n",arr[0]);
		}

	}
}

