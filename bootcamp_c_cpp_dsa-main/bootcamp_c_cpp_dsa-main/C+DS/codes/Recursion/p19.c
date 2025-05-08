// character array
//without using recursion search the character in the array
//and return their either index or true or false
//

#include<stdio.h>

int characterArray(char carr[],int size,char ch){
	for(int i=0;i<size;i++){
		if(ch==carr[i]){
			return i;
		}


	}
}


void main(){
	int size;
	printf("enter the array size\n");
	scanf("%d",&size);

	char arr[size];

	printf("enter the array elements\n");
	for(int i=0;i<size;i++){
		scanf(" %c",&arr[i]);
	}
	printf("array elements are\n");
	//getchar();
	for(int i=0;i<size;i++){
		printf("%c\n",arr[i]);
	}
	
	char search;
	
	printf("enter the search element\n");
	getchar();
	scanf("%c",&search);
	int ret=characterArray(arr,size,search);

	printf("element found index is %d\n",ret);

}


