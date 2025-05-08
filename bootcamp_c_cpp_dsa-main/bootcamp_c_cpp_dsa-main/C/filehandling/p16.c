/* fseek */

#include<stdio.h>

void main(){

	FILE *fp=fopen("success.txt","r");

	char ch;

//	fseek(fp,-7,2);	
	fseek(fp,10,0);
	while((ch=fgetc(fp))!=EOF){
		printf("%c",ch);
	}
}

