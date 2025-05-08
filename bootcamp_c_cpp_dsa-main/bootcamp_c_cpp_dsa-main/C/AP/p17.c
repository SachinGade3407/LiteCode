#include<stdio.h>
void main(){

	char carr[]={'A','B','C','D'};

	char *cptr1=& carr[2];
	char *cptr2=& carr[3];

	printf("%c",*cptr1);
	printf("%c",*cptr2);
	printf("%c",*(cptr1+2));
	printf("%c",*(cptr2+1));
	printf("\n");

}




