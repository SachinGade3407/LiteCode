#include<stdio.h>
#include<pthread.h>

void* fun(){
	printf("%ld\n",pthread_self());
	for(int i=1;i<=3;i++){
		printf("i=%d\n",i);
	}
	printf("End fun\n");
}

void* gun(){

	long int
	printf("%ld\n",pthread_self());
	pthread_create(&tid,NULL,fun,NULL);
	sleep(5);
	printf("Gun->i=%ld\n",i);
}

void main(){
	pthread_tid;
	printf("main threadid=%ld\n",pthread_self());
	pthread_create(&tid,NULL,fun,NULL);
	pthread_exit(NULL);
}



