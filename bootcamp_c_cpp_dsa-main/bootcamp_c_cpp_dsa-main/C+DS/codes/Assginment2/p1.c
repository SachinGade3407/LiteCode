/* WAP that searches for first cccurance of a particular elements from doubly linkedlist*/


#include<stdio.h>
#include<stdlib.h>
typedef struct demo{
	struct demo *prev;
	int data;
	struct demo *next;
}demo;

demo *head=NULL;

demo *createnode(){
	demo *newNode=(demo*)malloc(sizeof(demo));
	newNode->prev=NULL;
	printf("Enter integer data:\n");
	scanf("%d",&newNode->data);
	getchar();
	newNode->next=NULL;
	return newNode;
}
int addNode(){

	demo *newNode=createnode();
	if(head==NULL){
		head=newNode;
		return 0;
	}else{
		demo *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;

		}
		temp->next=newNode;
		newNode->prev=temp;
		return 0;
	}
}
int printLL(){
	if(head==NULL){
		printf("Linkedlist is empty:\n");
		return -1;
	}else{
		demo *temp=head;
		while(temp->next!=NULL){
			printf("|%d|->",temp->data);
			temp=temp->next;
		}
		printf("|%d|",temp->data);
		printf("\n");
		return 0;
	}
}
int firstOcc(){
	if(head==NULL){
		printf("Linkedlist is empty\n");
		return -1;
	}else{
		int num;
		printf("Enter number want to check first occurence:\n");
		scanf("%d",&num);
		getchar();
		demo *temp=head;
		int count=1;
		int fOcc=0;
		while(count){
			fOcc++;
			if(num==temp->data){
				count--;
			}
			temp=temp->next;
		}
		if(fOcc==0){
			printf("%d not foound\n",num);
		}else{
			printf("First Occurrence of%d is at %d\n",num,fOcc );
		}
		return 0;
	}
}
void main(){
	int n;
	printf("Enter number of nodes:\n");
	scanf("%d",&n);
	getchar();
	for(int i=1;i<=n;i++){
		addNode();
	}
	char choice;
	do{
		printf("1.printLL()\n");
		printf("2.firstfOcc()\n");

		int num;
		printf("Enter your choice\n");
		scanf("%d",&num);
		getchar();
		switch (num){
			case 1:
				printLL();
				break;

			case 2:
				firstOcc();
				break;
			default:
				printf("Enter wrong Input\n");
		}
		printf("Do you want to continue\nplease enter Y or y\n");
		scanf("%c",&choice);
	}
	while(choice=='Y'||choice=='y');
}



