/* WAP a demo structure consisting of interger data,Take the number of nodes from user & print the addition of the interger data*/

/*WAP FOR THE LINKEDLIST OF FESTIVALS IN INDIA .
 TAKE INPUIT FROM USER IN THE LINKEDLIST & PRINT THEIR DATA*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct demo{
	int data;
	struct demo *next;
}demo;

int sum=0;

demo  *head=NULL;
void addNode(){
	demo *newNode=(demo*)malloc(sizeof(demo));
	printf("Enter data\n");
	scanf("%d",&newNode->data);


//	newNode->demoName[strlen(newNode->demoName)-1]='\0';

	newNode->next=NULL;
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



void printLL(){
	demo *temp=head;
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
		printf("\n");

	}
}
void add(){
        
        int sum;	
	demo *temp=head;
	while(temp!=NULL){
		sum=sum+temp->data;
		temp=temp->next;
	}
	printf("%d\n",sum);

}

void main(){
	int call;
	printf("Enter no of nodes:\n");
	scanf("%d",&call);
	for(int i=1;i<=call;i++){
		addNode();
	}
	printf("Addition of interger of integer data is :%d\n",sum);
}


