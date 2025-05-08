/* WAP for the linkedList of states in India consisting of its name, population,buget & literacy connect 4 states the linkedlist & printf its data*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct states{
	char sName[20];
	long pop;
	float literacy;
	float budget;
	struct states *next;
}s;
s *head=NULL;

void addNode(){
	s *newNode=(s*)malloc(sizeof(s));
	printf("Enter states Name\n");
	fgets(newNode->sName,10,stdin);
	
	newNode->sName[strlen(newNode->sName)-1]='\0';

	printf("Enter population\n");
	scanf("%ld",&newNode->pop);

	printf("Enter literacy\n");
	scanf("%f",&newNode->literacy);

	printf("Enter budget\n");
	scanf("%f",&newNode->budget);

	getchar();

	newNode->next=NULL;
	if(head==NULL){
		head=newNode;
	}
	else{
		s *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
	}	

}

void printLL(){

	s *temp=head;

	while(temp!=NULL){

		printf("|%s->",temp->sName);
		printf("%ld->",temp->pop);
		printf("%f",temp->literacy);
		printf("%f|",temp->budget);

		temp=temp->next;

		printf("\n");

	}

}
void main(){
	addNode();
	addNode();
	addNode();
	addNode();
	printLL();
	printf("\n");
}

