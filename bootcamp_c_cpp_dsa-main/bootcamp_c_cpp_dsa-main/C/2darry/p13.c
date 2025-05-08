#include<stdio.h>
void main(){

	int arr1[3]={10,20,30};
	int arr2[3]={40,50,60};

//	int** iparr[]={&arr1,&arr2};   
	
	int (*ptr1)[3]=&arr1;
	int (*ptr2)[3]=&arr2;

	//printf("%p\n",iparr[0]);

	//printf("%p\n",iparr[1]);

	printf("%d\n",(arr1[1]));
	printf("%d\n",(arr2[0]));

}

