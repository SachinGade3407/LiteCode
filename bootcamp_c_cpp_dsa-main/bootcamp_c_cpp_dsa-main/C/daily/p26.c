#include<stdio.h>
void main(){

	int *fun(){

		int arr[]={10,20,30};
		return arr;
	}
	void main(){

		int *ptr=fun();
		printf("%d\n",*ptr);
	}
}

