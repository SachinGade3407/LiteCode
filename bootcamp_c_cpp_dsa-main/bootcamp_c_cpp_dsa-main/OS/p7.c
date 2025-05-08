//Fork and execc in multi threading...


#include<stdio.h>
#include<unistd.h>
void main(){

        int pid=fork();
	if(pid==0){
		printf("Code Area\n");
		printf("Code End\n");
		printf("%d\n",pid);
	}else{
		printf("%d\n",pid);
	}
}


