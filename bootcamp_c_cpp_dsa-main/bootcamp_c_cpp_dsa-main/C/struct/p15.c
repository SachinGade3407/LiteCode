#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct society{
	char sName[20];
	int wings;
	float avgrent;
};
void main(){

	struct society *ptr=(struct society*)malloc(sizeof(struct society));

	strcpy((*ptr).sName,"Tata");
	ptr->wings=10;
	ptr->avgrent=10.00;

	printf("%s\n",(*ptr).sName);
	printf("%d\n",(*ptr).wings);
	printf("%f\n",(*ptr).avgrent);


}


