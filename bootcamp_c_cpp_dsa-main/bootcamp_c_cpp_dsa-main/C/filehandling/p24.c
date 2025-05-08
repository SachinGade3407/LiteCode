#include<stdio.h>
void main(){

	FILE *fp=fopen("Demo.txt","r");
	char ch;
	while(ch=fgetc(fp)!= -1){
		printf("%c",ch);
	}
}

