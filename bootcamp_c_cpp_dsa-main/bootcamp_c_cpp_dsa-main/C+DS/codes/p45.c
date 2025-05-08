// Singly LL stack....

#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	int data;
	struct Node *next;
}node;

int top=-1;
int flag=0;
node*head=NULL;

node *createNode(){
	node *newNode=(node*)malloc(sizeof(node));

	printf("Enter data\n");
	scanf("%d",&newNode->data);

	newNode->next=NULL;
	return newNode;
}

int countNode(){
	int count=0;
	if(head==NULL){
		printf("LinkedList is empty\n");
		return 0;
	}
	node *temp=head;
	while(temp->next!=NULL){
		count++;
		temp=temp->next;
	}
	count++;
	return count;
}

int push(int *ptr){

	int count=countNode();
	if(count == *ptr){
		printf("Stack overflow\n");
		return -1;
	}else{
		node *newNode=createNode();

		if(head==NULL){
			head=newNode;
			return 0;
		}else{
			node *temp=head;

			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=newNode;
		}
		return 0;
	}
	
}
int pop(){

	int count = countNode();
	int data;
	if(head=NULL){
		printf("Stack underflow\n");
		flag=1;
		return -1;
	}else if(head->next!=NULL){
		data=head->data;
		free(head);
		head=NULL;
		return data;

	}else{
		node *temp=head;
		while(temp->next->next!=NULL){
			temp=temp->next;
		}
		data=temp->next->data;
		free(temp->next);
		temp->next=NULL;
		return data;
	}
}
int peek(){
	if(head==NULL){
		printf("Empty stack\n");
		return -1;
	}else{
		node *temp=head;
		while(temp->next!=NULL){
			printf("|%d|",temp->data);
			temp=temp->next;
		}
		printf("|%d|",temp->data);
		return temp->data;
	}
}

void main(){

	int size;

	printf("Enter size for stack:\n");
	scanf("%d",&size);

	char ch;

	do{
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.peek\n");

		int choice;
		printf("Enter choice\n");
		scanf("%d",&choice);

		switch(choice){

			case 1:
				push(&size);
				break;
			case 2:
				{
					int ret=pop();
					if(flag==0){
						printf("Stack underflow\n");
					}else{
						printf("%d is popped",ret);
					}
				}
				break;
			case 3:
				peek();
				break;
			default:
				printf("Wrong choice\n");
		}
		getchar();
		printf("Do you want to continue ?\n");
		scanf("%c",&ch);
	}while(ch=='Y'|| ch=='y');
}
