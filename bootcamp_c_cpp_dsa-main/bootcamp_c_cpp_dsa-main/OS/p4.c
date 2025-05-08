#include<stdio.h>
#include<pthread.h>
void* run(){
	pthread_t tid;
	printf("child thread\n");
	printf("child=%ld\n",pthread_self());
	pthread_create(&tid,NULL,run,NULL);
	pthread_join(tid,NULL);
	printf("child thread end\n");
}

void * fun(){

        printf("child thread\n");
        printf("child=%ld\n",pthread_self());
}
void main(){

        pthread_t tid;
        printf("Main=%ld\n",pthread_self());
        pthread_create(&tid,NULL,fun,NULL);
        pthread_join(tid,NULL);
        printf("Main thread\n");
}

