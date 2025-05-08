#include<stdio.h>
#include<string.h>

struct movie{
	char mName[20];
	struct movieInfo{
		char actor[20];
		float imdb;

	}obj1;
};
void main(){

	struct movie obj2={"RHIDM","Madhum",8.5};

	printf("%s\n",obj2.mName);
	printf("%s\n",obj2.obj1.actor);
	printf("%f\n",obj2.obj1.imdb);
}

