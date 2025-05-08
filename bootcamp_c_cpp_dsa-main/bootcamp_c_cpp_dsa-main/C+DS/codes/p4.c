#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct company{

	char cName[10];
	int empcount;
	float revenue;

};
void main(){

	struct company *cptr=(struct company*)malloc(sizeof(struct company));
	strcpy(cptr->cName,"c2w");
	cptr->empcount=50;
	cptr->revenue=10;

	printf("%s\n",(cptr)->cName);
	printf("%d\n",cptr->empcount);
	printf("%f\n",(*cptr).revenue);
}

