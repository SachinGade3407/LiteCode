#include<stdio.h>
char* mystrcpy(char *dest,char *src,int n){
	int count=0;
	while(n!=0 && *src!='\0'){
		*dest=*src;
		dest++;
		src++;
		n--;
	}
	dest='\0';
	return dest;
}
void main(){

	char str[20]={'S','a','C','H','i','N','\0'};
	puts(str);
	mystrcpy(str);
	puts(str);
}

