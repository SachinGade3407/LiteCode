#include<stdio.h>
#include<stdlib.h>

typedef struct player{
	char pName[20];
	int jerno;
	float avg;
	struct player *next;
}play;


play *head=NULL;
void addNode(){
	play *newNode=(play*)malloc(sizeof(play));
	
	printf("Enter player Name:\n");
	fgets(newNode->pName,15,stdin);
	
	printf("Enter jerno:\n");
	scanf("%d",&newNode->jerno);

	printf("Enter avg\n");
	scanf("%f",&newNode->avg);

	getchar();

	newNode->next=NULL;
	
	if(head==NULL){
		head=newNode;
	}else{
		play *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
	}
}

void printLL(){
	play *temp=head;
	while(temp!=NULL){
		printf("|%s->",temp->pName);
		printf("|%d->",temp->jerno);
		printf("%f|",temp->avg);
		temp=temp->next;
	}

}
void main(){

	addNode();
	addNode();
	addNode();	
	printLL();
	printf("\n");
}
