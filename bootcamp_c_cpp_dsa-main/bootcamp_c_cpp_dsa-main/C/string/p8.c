#include<stdio.h>
void main(){

	char arr[20];
	printf("Enter player name:\n");
	gets(arr);
	puts(arr);

	char *str=arr;
	puts(str);

}
