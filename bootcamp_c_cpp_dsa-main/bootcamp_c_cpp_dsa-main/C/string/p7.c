#include<stdio.h>
void main(){

	char name[10];
	printf("Enter string:\n");
	scanf("%s",name);
	scanf("%[^\n]",name);
	printf("%s\n",name);
}

