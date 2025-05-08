#include<stdio.h>
#include<stdlib.h>
typedef struct Node{

	int data;
	struct Node *next;
}node;

node *head=NULL;
int size;
int top=-1;


node *createNode(){

	node *newNode=(node*)malloc(sizeof(node));

	printf("Enter data\n");
	scanf("%d",&newNode->data);
	newNode->next=NULL;
	return newNode;
}
int addNode(){

	node *newNode=createNode();

	if(head==NULL){
		printf("Stack underflow\n");
		return -1;
	}else if(top=-1){
		printf("Stack underflow");
		return -1;
	}else{
		node *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
		return 0;
	}
}
int delast(){

	if(head==NULL){
		printf("stack Underflow");
		return -1;
	}else{
		node *temp=head;
		while(temp->next->next==NULL){
			free(temp->next);
			temp->next=NULL;
		}
	}
	return data;
}
int printLL(int size){

	if(head==NULL){
		printf("stack overflow\n");
	}else{
		node *temp=head;
		while(temp->next!=NULL){
			printf("|%d|->\n",temp->data);
		}
		printf("|%d|\n",temp->data);
	}
}
void main(){

	int size;

	printf("Enter stack size:\n");
	scanf("%d",&size);

	int stack[size];

	char choice;

	do{
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.peek\n");

		int ch;

		printf("Enter your choice\n");
		scanf("%c",&ch);

		switch(ch){

			case 1:
				addNode();
				break;

			case 2:
				{
					int ret=delast();
					printf("%d popped\n",ret);
				}
				break;
			case 3:
				printLL();
				break;
			default:
				printf("Invalid choice\n");
				break;
		}
		getchar();
		printf("Do you want to continue\n");
		scanf("%c",&choice);

	}
	while(choice=='y'||choice=='Y');
}




