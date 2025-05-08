//Fork and execc in multi threading...


#include<stdio.h>
#include<unistd.h>
void main(){
	
	int pid=fork();
	printf("Code Area\n");
	printf("Code End\n");
	printf("%d\n",pid);
}

