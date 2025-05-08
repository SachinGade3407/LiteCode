#include<stdio.h>
void main(){

	char cName[]={'v','i','r','a','t','\0'};

	char *fname1="messi";
	char *fname2="neymar jr";
        char *fname3="messi";

	printf("%p\n",cName);
	printf("%p\n %p\n %p\n",fname1,fname2,fname3);
}


