#include<stdio.h>
char*mystrcat(char *dest,char *src){
        while(*dest!='\0'){
                dest++;
        }       
        while(*src!='\0'){
                *dest=*src;
                src++;
                dest++;
                
        }       
        *dest='\0';
        return dest;
}       
void main(){

	char str1[20];
	char str2[20];
	printf("Enter first string:\n");
	gets(str1);

	printf("Enter first string:\n");
        gets(str2);

	mystrcat(str1,str2);puts(str1);
}


