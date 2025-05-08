#include<stdio.h>
#include<pthread.h>
void* fun(){
	printf("Start fun\n");
	printf("%ld",pthread_self());
	printf("End fun\n");
}
void main(){
	long int tid;
	printf("Start main\n");
	printf("%ld",pthread_self);
	pthread_join(tid,NULL);
	pthread_create(&tid,NULL,fun,NULL);
	printf("End fun\n");
}

