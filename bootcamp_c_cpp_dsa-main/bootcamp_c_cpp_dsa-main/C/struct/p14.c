#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct IPL{

	char sName[20];
	int tTeam;
	double price;

};
void main(){

	struct IPL *ptr=(struct IPL*)malloc(sizeof(struct IPL));

	strcpy((*ptr).sName,"Tata");
	ptr->tTeam=8;
	(*ptr).price=10.00;
}




