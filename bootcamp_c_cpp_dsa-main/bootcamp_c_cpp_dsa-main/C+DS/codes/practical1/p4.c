/*WAP  to count the number of festivals nodes in the above program*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct festivals{
	char fName[20];
	int ndays;
	float cel;
	struct festivals *next;
}f;

f  *head=NULL;
void addNode(){
	f *newNode=(f*)malloc(sizeof(f));
	printf("Enter festivals Name\n");
	fgets(newNode->fName,10,stdin);

	newNode->fName[strlen(newNode->fName)-1]='\0';

	printf("Enter no of days\n");
	scanf("%d",&newNode->ndays);

	printf("Enter celebration\n");
	scanf("%f",&newNode->cel);

	getchar();

	newNode->next=NULL;
	if(head==NULL){
		head=newNode;
	}
	else{
		f *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
	}
}



void printLL(){
	f *temp=head;
	while(temp!=NULL){
		printf("|%s->",temp->fName);
		printf("%d->",temp->ndays);
		printf("%f|",temp->cel);
		temp=temp->next;
		printf("\n");

	}
}
void count(){
	f *temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	printf("%d\n",count);
}
void main(){
	addNode();
	addNode();
	addNode();
	printLL();
	count();
	printf("\n");
}

