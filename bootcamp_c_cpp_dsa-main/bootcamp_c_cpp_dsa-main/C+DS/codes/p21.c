/* create node(),addNode(),addfirst(),addAtpos(),countNode();printLL()*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct Employee{
        char name[20];
	int id;
	struct Employee *next;
}emp;

emp *head=NULL;

emp *createNode(){

	emp *newNode=(emp*)malloc(sizeof(emp));
	
	getchar();

	int i=0;
	char ch;
	printf("Enter name of  Employee:\n");
	while((ch=getchar())!='\n'){

		(*newNode).name[i]=ch;
		i++;
	}
	printf("Enter Employee Id:\n");
	scanf("%d",&newNode->id);

	newNode->next=NULL;

	return newNode;

}
void addNode(){

	emp*newNode=createNode();

	if(head==NULL){
		head=newNode;
	}
	else{
		emp *temp=head;

		while(temp->next!=NULL){

			temp=temp->next;
		}
		temp->next=newNode;
	}
}
void addFirst(){

	emp *newNode=createNode();

	if(head==NULL){

		head=newNode;
		}
	else{
		newNode->next=head;

		head=newNode;
	}
}
void addAtpos(int pos){

	emp *newNode=createNode();

	emp *temp=head;

	while(pos-2){

		temp=temp->next;

		pos--;

	}
	newNode->next=temp->next;

	temp->next=newNode;
}

void printLL(){

	emp *temp=head;

	while(temp!=NULL){

		printf("%s->",temp->name);

		printf("%d|",temp->id);;

		temp=temp->next;

	}
	printf("\n");

}

void  countNode(){

	emp *temp=head;

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


