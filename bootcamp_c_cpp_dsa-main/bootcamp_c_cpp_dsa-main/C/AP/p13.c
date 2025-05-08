#include<stdio.h>
void main(){

	char ch1='A';
	char ch2='B';

	char *ptr=&ch1;

	printf("%p\n",ptr);
	printf("%p\n",*ptr);

	printf("%d\n",(ptr+1.5));
	printf("%c\n",*(ptr+1.5));
}
// error because in pointer addition only value is consider.



