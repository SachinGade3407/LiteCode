#include<stdio.h>
#include<stdlib.h>

typedef struct student{
	int id;
	float ht;
	struct student *next;
}stud;
void addNode (stud *head){
	stud *newNode=(stud*)malloc(sizeof(stud));
	newNode->id=1;
        newNode->ht=5.5;
        newNode->next=NULL;
        head=newNode;
}
void printLL(stud *head){

	stud *temp=head;
	while(temp!=NULL){
		printf("%d\n",temp->id);
		printf("%f\n",temp->ht);
		temp=temp->next;
	}
}
void main(){

	stud *head=NULL;
	addNode(head);
	printLL(head);
}

