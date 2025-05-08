//recursion in character  array...


#include<stdio.h>

int searchEle(int arr[],int size,char ch){
	if(ch==arr[size]){
		return size;
	}
	return chararray(arr,size-1,ch);
}

void main(){

	char arr[5]={'A','B','C','D','E'};
	searchEle= 'B';
}

