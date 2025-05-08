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

	printf("Enter rating\n");
	scanf("%f",&newNode->imdb);

	getchar();

	newNode->next=NULL;
	head=newNode;

}
void printll(){
	mov *temp=head;
	while(temp!=NULL){
		printf("|%s->",temp->mName);
		printf("%f|",temp->imdb);
		temp=temp->next;
	}
}
void main(){

	addNode();
	addNode();
	//addNode();	
	printll;
}

