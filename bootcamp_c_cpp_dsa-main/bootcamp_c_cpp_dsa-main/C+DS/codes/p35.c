/*   Singly Circular Linkedlist */


#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

	int data;
	struct Node *next;
}node;

node *head=NULL;

node *createNode(){

	node *newNode=(node*)malloc(sizeof(node));

	printf("Enter Data:\n");
	scanf("%d",&newNode->data);

	newNode->next=NULL;
	return newNode;
}

int addNode(){
       

	node *newNode=createNode();

	if(head==NULL){
		head=newNode;
		newNode->next=head;
	}else{

		node *temp=head;

		while(temp->next!=head){

			temp=temp->next;
		}
		temp->next=newNode;
		newNode->next=head;
	}
}

int addFirst(){

	node *newNode=createNode();

	if(head==NULL){
		head=newNode;
		newNode->next=head;
	}else{
		node *temp=head;

		while(temp->next!=NULL){

			temp=temp->next;
		}
		newNode->next=head;
		head=newNode;
		temp->next=newNode;
	}
}
void printLL(){

	node *temp=head;
	while(temp->next!=head){
		printf("|%d|->",temp->data);
		temp=temp->next;
	}
	printf("|%d|",temp->data);
}




void main(){

	int nodecount;

	printf("Enter Num of Nodes:\n");
	scanf("%d",&nodecount);

	for(int i=1;i<=nodecount;i++){

		addNode();
	}
	printLL();
	addFirst();
	printLL();
}



