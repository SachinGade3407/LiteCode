/*cp command code*/

#include<stdio.h>
void main(){

	FILE *fp=fopen("success.txt","r");
	FILE *fp1=fopen("property.txt","w");

	char ch;
	while((ch=fgetc(fp))!=EOF){
		fputc(ch,fp);
	}
}

