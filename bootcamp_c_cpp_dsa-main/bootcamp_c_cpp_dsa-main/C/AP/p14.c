#include<stdio.h>
void main(){

	char ch1='x';
	char ch2='y';

	char*ptr=&ch;

	printf("%p\n",ptr);
	printf("%c\n".*ch);

	printf("%p\n",(ptr+'A'));
	printf("%c\n",*(ptr+'A'));

}
