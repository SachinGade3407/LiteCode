#include<stdio.h>

void printstring(char str1[]);
void stringprint(char *str2);

void main(){
	char arr[20];
	printf("Enter your name:\n");
	gets(arr);
	printstring(arr);
	stringprint(arr);
}
void printstring(char str1[]){
	puts(str1);
}
void stringprint(char *str2){
	puts(str2);
}




