#include<stdio.h>
#include<string.h>

char *str1="Ashish";
char *str2="ashish";

int mystrcmp(char *str1,char *str2){
	while(*str1 !='\0'){
		if(*str1==*str2){
			str1++;
			str2++;
		}else{
			return(*str1-*str2);
		}
		return 0;
	}
}
void main(){

	char *str1="Ashish";
	char *str2="ashish";

	int diff=mystrcmp(str1,str2);
	if(diff==0){
		printf("string are equal");
	}else{
		printf("string are not equal");
	}
	printf("\n");
}


