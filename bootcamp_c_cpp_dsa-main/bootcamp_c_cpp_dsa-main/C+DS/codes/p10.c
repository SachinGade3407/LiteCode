
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Movie{

	int count;
	char mName[20];
	float price;
	struct Movie *next;
}m;
void accessData(m *ptr){

	printf("%d\n",ptr->count);
	printf("%s\n",ptr->mName);
	printf("%f\n",ptr->price);
	printf("%p\n",ptr->next);
}
void main(){

	m *m1=(m*)malloc(sizeof(m));
	m *m2=(m*)malloc(sizeof(m));
       	m *m3=(m*)malloc(sizeof(m));

	m1->count=5;
	strcpy(m1->mName,"Tiger");
	m1->price=500;
	m1->next=m2;

	m2->count=4;
        strcpy(m2->mName,"Timepass");
        m2->price=600;
        m2->next=m3;

	m3->count=7;
        strcpy(m3->mName,"Ashiki");
        m3->price=899;
        m3->next=NULL;

	accessData(m1);
	accessData(m2);
	accessData(m3);



}
