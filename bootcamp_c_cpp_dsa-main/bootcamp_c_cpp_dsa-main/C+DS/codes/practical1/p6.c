#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct Demo{
       
	int data;
	struct Demo *next;
}d;

d *head=NULL;

d *createNode(){

	d *newNode=(d *)malloc(sizeof(d));
	

	printf("Enter data:\n");
	scanf("%d",&newNode->data);

	newNode->next=NULL;

	return newNode;

}
void addNode(){

	d*newNode=createNode();

	if(head==NULL){
		head=newNode;
	}
	else{
		d *temp=head;

		while(temp->next!=NULL){

			temp=temp->next;
		}
		temp->next=newNode;
	}
}

void  countNode(){

        d *temp=head;

        int count=0;

        while(temp!=NULL){

                count++;

                temp=temp->next;
        }
        printf("count:%d\n",count);
}

void printLL(){

	d *temp=head;

	while(temp!=NULL){

		printf("%d|",temp->data);;

		temp=temp->next;

	}
	printf("\n");

}

void max(){

	struct Demo *temp=head;
	int max=temp->data;
	while(temp!=NULL){
		if(max<(temp->data)){
			max=temp->data;
		}
		temp=temp->next;
	}
	printf("max=%d",max);
}

void main(){

	int nodeCount;

	printf("Enter count nodes:\n");
	scanf("%d",&nodeCount);

	for(int i=1;i<=nodeCount;i++){

		addNode();
	}
	printLL();

	countNode();

	max();
	
	printf("\n");

}


