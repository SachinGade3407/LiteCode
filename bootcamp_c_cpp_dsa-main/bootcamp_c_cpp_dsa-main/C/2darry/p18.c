#include<stdio.h>
void main(){

	char carr[3]={'A','B','C'};
	char carr2[3]={'D','E','F'};
	char *ptr1=&carr[1];
	char *ptr2=carr;
	char (*ptr3)[3]=&carr;

	printf(" %c",**ptr3);
	printf(" %c",*ptr1);
	ptr1++;
	printf(" %c",*ptr1);

        printf(" %c",*(*ptr3+2));
	ptr3;
}

