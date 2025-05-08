#include<stdio.h>
#include<string.h>
void main(){

	char arr1[3][10]={"Ashish","Kanha","Rahul"};
	printf("%p\n",&(arr1[1]));
	printf("%p\n",&(arr1[1][1]));
	printf("%p\n",&arr1[2]);

//	strcpy(arr1[2])="Rahul";
//	puts(arr1[0]);
//	printf("%s\n",arr1[2]);
}
