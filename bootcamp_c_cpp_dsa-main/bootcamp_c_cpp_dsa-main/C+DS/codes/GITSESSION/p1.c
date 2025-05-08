/* Concat 2 Linkedlist*/

#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
};
struct Node *head1=NULL;
struct Node *head2=NULL;

struct Node *createNode(){
	struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));

	printf("Enter Data\n");
	scanf("%d",&newNode->data);

	newNode->next=NULL;

	return newNode;
}
int addNode(struct Node **head){
	struct Node *newNode=createNode();

	if(*head==NULL){
		*head=newNode;
		return 0;
	}else{
		struct Node *temp=*head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
	}
	return 0;
	
}
int countNode(struct Node *head){

	struct Node *temp=head;
	int count=0;
	while(temp->next!=head){
		count++;
		temp=temp->next;
	}
	count++;
	printf("Count:%d\n",count);

	return count;
}
void concatnate(struct Node *head1){

	struct Node *temp1=head1;

	while(temp1->next!=NULL){
		temp1=temp1->next;
	}

	temp1->next=head2;
}

int printLL(struct Node *head){

	if(head==NULL){
		printf("linkedlist is empty:\n");
		return -1;
	}else{
		struct Node *temp=head;
		while(temp->next!=NULL){
			printf("|%d|->",temp->data);
			temp=temp->next;
		}
		printf("|%d|\n",temp->data);
	}
	return 0;
}


void main(){
	
	int nodecount;

	printf("Enter no of nodes:Linkedlist1\n");
	scanf("%d",&nodecount);

	for(int i=1;i<=nodecount;i++){
		addNode(&head1);
	}
	printf("Enter no of nodes:Linkedlist2\n");
	scanf("%d",&nodecount);

	for(int i=1;i<=nodecount;i++){
		addNode(&head2);
	}

	printLL(head1);
	printLL(head2);


	concatnate(head1);

	printLL(head1);
}






