/* conditional preprocessing*/


#include<stdio.h>
#define access 1

void main(){

#if access
	printf("Access per\n");
#else
	printf("not-Access\n");
#endif
	printf("EOF\n");
}

