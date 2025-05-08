/* Doubly linkedlist All 8 function*/


#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

	struct Node *pre;
	int data;
	struct Node *next;
}Node;

Node *head=NULL;

Node *createNode(){

	Node *newNode=(Node *)malloc(sizeof(Node));

	newNode->pre=NULL;

	printf("Enter data:\n");
	scanf("%d",&newNode->data);

	newNode->next=NULL;

	return newNode;

}
void addNode(){

	Node *newNode=createNode();

	if(head==NULL){
		head=newNode;
	}
	else{
		Node *temp=head;

		while(temp->next!=NULL){

			temp=temp->next;
		}
		temp->next=newNode;
		newNode->pre=temp;
		temp->next=newNode;
		newNode->pre=temp;
	}

}
int countNode(){

        Node *temp=head;

        int count=0;

        while(temp!=NULL){

                count++;

                temp=temp->next;
        }
        printf("count:%d\n",count);
        return count;
}

void addFirst(){

	Node  *newNode=createNode();

	if(head==NULL){

		head=newNode;
		
	}else{
		newNode->next=head;
		head->pre=newNode;
		head=newNode;
	}
}
int addAtpos(int pos){

	int count=countNode();

	if(pos<=0||pos>=count){
		printf("invalid position\n");
		return -1;
	}else{
		if(pos==1){
			addFirst();
		}else if(pos==count+1){
			addNode;
		}else{
			Node *newNode=createNode();
			Node *temp=head;
		
			while(pos-2){
				temp=temp->next;
				pos--;
			}
			newNode->next=temp->next;
			temp->pre=temp;
			temp->next->pre=newNode;
			temp->next=newNode;
		}
		return 0;
	}
}


void printLL(){

	Node *temp=head;

	int count=countNode();

	if(count==0){

		printf("Node is not present\n");
	}else{
		while(temp->next!=NULL){
			printf("|%d|->",temp->data);
			temp=temp->next;
		}
		printf("|%d|",temp->data);
	}
	printf("\n");

}

int deleteFirst(){

	int count=countNode();


	if(head==NULL){

		printf("Nothing to delete\n");
		return -1;
	}else if(count == 1){

		 free(head);
		 head=NULL;
	}else{
		head=head->next;
		free(head->pre);
		head->pre=NULL;
	}
}	
void main(){

	int countNode;

	printf("Enter count\n");
	scanf("%d",&countNode);

	for(int i=1;i<=countNode;i++){

		addNode();

	}
	
	printLL();

	addFirst();

	printLL();

	int pos;
	printf("Enter position\n");
	scanf("%d",&pos);

	addAtpos(pos);

	printLL();

	deleteFirst();

	printLL();
}



