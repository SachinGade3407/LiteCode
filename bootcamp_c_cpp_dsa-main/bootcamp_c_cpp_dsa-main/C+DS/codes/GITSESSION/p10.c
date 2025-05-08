// Singly Linkedlist ....implace reverse....midpoint 1st approach and palindrome...
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node{

	int data;
	struct Node *next;
};

struct Node *head=NULL;

struct Node *createNode(){
	struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));

	printf("Enter data\n");
	scanf("%d",&newNode->data);

	newNode->next=NULL;

	return newNode;
}
int countNode(){
	int count=0;
	struct Node *temp=head;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	return count;
}
int midNode(){
	int cnt=countNode()/2;
	cnt=cnt+1;
	struct Node *temp=head;
	while(cnt){
		temp=temp->next;
		cnt--;
	}
	return temp->data;
}
bool ispalindrome(){
	int cnt=countNode();
		int arr[cnt];
		struct Node *temp=head;
		int i=0;
		while(temp!=NULL){
			arr[i]=temp->data;
			i++;
			temp=temp->next;
		}
		int start=0;
		int end=cnt-1;

		while(start<end){
			if(arr[start]!=arr[end]){
				return false;
				start++;
				end--;
			}
			return true;
		}
}

void addNode(){
	struct Node *newNode=createNode();

	if(head==NULL){
		head=newNode;
	}else{
		struct Node *temp=head;
		while(temp->next!=NULL){

			temp=temp->next;
		}
		temp->next=newNode;
	}
}
int implaceRev(){

	if(head==NULL){
		printf("Empty LL\n");
		return -1;
	}else if(head->next==NULL){
		head;
	}else{
		struct Node *temp1=head;
		struct Node *temp2=NULL;


		while(head!=NULL){

			head=head->next;
			temp1->next=temp2;
			temp2=temp1;
			temp1=head;
		}
		head=temp2;
	}
	return 0;
}
		
int printLL(){

	if(head==NULL){
		printf("Empty LL\n");
		return -1;
	}else{
		struct Node *temp=head;

		while(temp->next!=NULL){
			printf("|%d|->",temp->data);
			temp=temp->next;
		}
		printf("|%d|\n",temp->data);
		return 0;
	}
}
void main(){

	char ch;
	do{
		printf("1.addNode\n");
		printf("2.printf LinkedList\n");
		printf("3.Implace reverse:\n");
		printf("4.Midpoint\n");
		printf("5.Palindrome\n");



		int choice;

		printf("Enter your choice:\n");
		scanf("%d",&choice);

		switch(choice){

			case 1:
				addNode();
				break;
			case 2:
				printLL();
				break;

			case 3:
				implaceRev();
				break;
			case 4:
				{
					printf("middle Node data :%d",midNode());
				}
				break;
			case 5:
				{
					bool val=ispalindrome();
					if(val==false){
						printf("Not palindrome\n");
					}else{
						printf("palindrome\n");
					}
				}
				break;
						
			default:
				printf("Wrong choice\n");
				break;
		}
		getchar();
		printf("Do you want to continue...y/n:\n");
		scanf("%c",&ch);
	}
	while(ch=='y'|| ch=='Y');
}
