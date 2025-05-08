#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct Demo{
       
	int data;
	struct Demo *next;
}d;

d *head=NULL;

d *createNode(){

	d *newNode=(d *)malloc(sizeof(d));
	

	printf("Enter data:\n");
	scanf("%d",&newNode->data);

	newNode->next=NULL;

	return newNode;

}
void addNode(){

	d*newNode=createNode();

	if(head==NULL){
		head=newNode;
	}
	else{
		d *temp=head;

		while(temp->next!=NULL){

			temp=temp->next;
		}
		temp->next=newNode;
	}
}
void addFirst(){

	d *newNode=createNode();

	if(head==NULL){

		head=newNode;
		}
	else{
		newNode->next=head;

		head=newNode;
	}
}
void addAtpos(int pos){

	d *newNode=createNode();

	d *temp=head;

	while(pos-2){

		temp=temp->next;

		pos--;

	}
	newNode->next=temp->next;

	temp->next=newNode;
}

void printLL(){

	d *temp=head;

	while(temp!=NULL){

		printf("%d|",temp->data);;

		temp=temp->next;

	}
	printf("\n");

}

void  countNode(){

	d *temp=head;

	int count=0;

	while(temp!=NULL){

		count++;

		temp=temp->next;
	}
	printf("count:%d\n",count);
}

void main(){

	int nodeCount;

	printf("Enter count nodes:\n");
	scanf("%d",&nodeCount);

	for(int i=1;i<=nodeCount;i++){

		addNode();
	}


	addFirst();

	int pos;
	

	printf("Enter position number:\n");
	scanf("%d",&pos);

	addAtpos(pos);

	printLL();

	printf("\n");

	countNode();

}


