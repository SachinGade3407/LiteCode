#include<stdio.h>

int ifpresnt(int arr[],int size,int key){
	for(int i=0;i<=size;i++){
		if(arr[i]==key){
			return i;
		}
	}
}
int lastocc(int arr,int size,int key){
	int store=-1;
	for(int i=1;i<size;i++){
		if(arr[i]==key){
			store=i;
		}
	}
	return store;
}
int seclast(int arr,int size;int key){
	int seclast=-1;
	for(int i=1;i<size;i++){
		 if(arr[i]==key){
			 store=store;
		 	 store==i;
		 }
	}
	return seclast;
}

void main(){
	int size=7;
	int arr[7]={1,2,3,4,5,6,7};
	int key=3;
	int index=ifpresnt(int arr,int size,int key);
}

