/* WAP for the linkedList of malls consisting of the name, number of shops,& revenue;connect 3 malls in the linkedList & print their data*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct malls{
	char mName[20];
	int shops;
	float rev;
	struct malls *next;
}m;

m *head=NULL;
void addNode(){
	m *newNode=(m*)malloc(sizeof(m));
	printf("Enter malls Name\n");
	fgets(newNode->mName,10,stdin);
	
	newNode->mName[strlen(newNode->mName)-1]='\0';

	printf("Enter shopno\n");
	scanf("%d",&newNode->shops);

	printf("Enter revenue\n");
	scanf("%f",&newNode->rev);

	getchar();

	newNode->next=NULL;
	if(head==NULL){
		head=newNode;
	}
	else{
		m *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
	}
}



void printLL(){
	m *temp=head;
	while(temp!=NULL){
		printf("|%s->",temp->mName);
		printf("%d->",temp->shops);
		printf("%f|",temp->rev);
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



