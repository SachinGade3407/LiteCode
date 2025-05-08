//Fork and execc in multi threading...


#include<stdio.h>
#include<unistd.h>
void main(){

        int pid=fork();
	if(pid==0){
        execlp("ps","process detial","NULL");
	}else{
		printf("%d\n",pid);
	}
	printf("End\n");
}



