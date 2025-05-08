// fscanf..


#include<stdio.h>
void main(){

	FILE *fp=fopen("magic1.txt","r");
	char ch;

	fscanf(fp,"%c",&ch);
	printf("%c\n",ch);

//	fscanf(stdin"%c",&ch);
}

