#include<stdio.h>
#include<stdlib.h>

typedef struct movie{
	char mName[20];
	float imdb;
	struct movie *next;
}mov;

mov *head=NULL;
void addNode(){
	mov *newNode=(mov*)malloc(sizeof(mov));
	
	printf("Enter Movie Name\n");
	fgets(newNode->mName,15,stdin);

	getchar();

	printf("Enter rating\n");
	scanf("%f",&newNode->imdb);

	getchar();

	newNode->next=NULL;
	
	if(head==NULL){
		head=newNode;
	}else{
		mov *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
	}
}

void printLL(){
	mov *temp=head;
	while(temp!=NULL){
		printf(" |%f |%s| ",temp->imdb,temp->mName);
		//printf("%f|",temp->imdb);
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

