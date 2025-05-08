/* WAP that accepts a string from the user and print the length of the string,use mystrlen */


#include<stdio.h>
#include<string.h>
int mystrlen(char *str){
	int count=0;
	while(*str!='\0'){
		str++;
		count++;
	}
	return count;
}
void main(){
	char *arr[1];
	printf("Enter the string\n");
	gets(arr);

	int length=strlen(arr);
	printf("%d\n",length);
}

