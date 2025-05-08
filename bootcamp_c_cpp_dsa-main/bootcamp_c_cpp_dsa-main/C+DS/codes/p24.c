#include<stdio.h>
#include<stdlib.h>

typedef struct Demo{
       
	int data;
	struct Demo *next;
}demo;

demo *head=NULL;

demo *createNode(){

	demo *newNode=(demo *)malloc(sizeof(demo));
	

	printf("Enter data:\n");
	scanf("%d",&newNode->data);

	newNode->next=NULL;

	return newNode;

}
void addNode(){

	demo *newNode=createNode();

	if(head==NULL){
		head=newNode;
	}
	else{
		demo *temp=head;

		while(temp->next!=NULL){

			temp=temp->next;
		}
		temp->next=newNode;
	}
}
void addFirst(){

	demo  *newNode=createNode();

	if(head==NULL){

		head=newNode;
		}
	else{
		newNode->next=head;

		head=newNode;
	}
}
void addAtpos(int pos){

	demo *newNode=createNode();

	demo  *temp=head;

	while(pos-2){

		temp=temp->next;

		pos--;

	}
	newNode->next=temp->next;

	temp->next=newNode;
	
}

void printLL(){

	demo *temp=head;

	while(temp!=NULL){

		printf("|%d|",temp->data);;

		temp=temp->next;

	}
	printf("\n");

}

void  countNode(){

	demo *temp=head;

	int count=0;

	while(temp!=NULL){

		count++;

		temp=temp->next;
	}
	printf("count:%d\n",count);
}


void deleteFirst(){

	demo *temp=head;
	head=temp->next;
	free(temp);
}
void deleteLast(){

	demo *temp=head;

	while(temp->next->next=NULL){

		temp=temp->next;
	}
	free(temp->next);
	temp->next=NULL;
}

void main(){


	char choice;

	do{
		printf("1.addNode\n");
		printf("2.addFirst\n");
		printf("3.addFirst\n");
		printf("4.addAtpos\n");
		printf("5.printLL\n");
		printf("6.deleteFirst\n");
		printf("7.deleteLast\n");
		printf("8.countNode\n");


		int ch;

		printf("\n Enter choice\n");
		scanf("%d",&ch);

		switch(ch){
			case 1:
				{
				int countNode;

				printf("Enter node count:\n");
				scanf("%d",&countNode);

				for(int i=1;i<=countNode;i++){
					
					addNode();
				}
					break;
				}
			
			case 2:
				addFirst();
				break;
			case 3:
				addFirst();
				break;
			case 4:
				{
				int pos;

				if(pos<=countNode || pos>=1){
					
					printf("Enter position:\n");
					scanf("%d",&pos);
					
					addAtpos(pos);
				}else{
					printf("You enter wrong position\n");
				}

				break;
				
				}
			
			case 5:
				printLL();
				break;
			
			case 6:
				deleteFirst();
				break;
			case 7:
				deleteLast();
				break;

			case 8:
				countNode();
				break;


			
			default:
				
				printf("wrong choice\n");
		}


		

		getchar();

		printf("Do you want to contiune:\n");
		scanf("%c",&choice);
	}
	while(choice=='y'||choice=='Y');
}




