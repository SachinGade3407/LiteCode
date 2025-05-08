//8) linear queue using linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct demo {
	int data;
	struct demo *next;
}demo;

demo *front=NULL,*rear=NULL;
int flag=0;

demo *createnode(){
	demo *node=(demo *)malloc(sizeof(demo));
	if(node==NULL){
		printf("memory full\n");
		exit(0);
	}
	printf("enter the data\n");
	scanf("%d",&node->data);
	node->next=NULL;
	return node;
}

int enqueue(){
	demo *node=createnode();

	if(front==NULL){
		front=node;
		rear=node;
	}else{
		rear->next=node;
		rear=node;
	}
	return 0;
}
int dequeue(){
	if(front==NULL){
		flag=0;
		return -1;
	}else{
		flag=1;
		demo *temp=front;
		front=front->next;
		int data=temp->data;
		free(temp);
		return data;
	}
}
int frontt(){

	if(front==NULL){
		flag=0;
		return -1;
	}else{
		return front->data;
	}
}

int printQueue(){
	if(front==NULL){
		return -1;
	}else{
		demo *temp=front;
		while(temp->next!=NULL){
			printf("|%d|--->",temp->data);
			temp=temp->next;
		}
			printf("|%d|\n",temp->data);
	}
}


void main(){

	char choice;

	do{
		printf("1.enqueue\n");
		printf("2.dequeue\n");
		printf("3.frontt\n");
		printf("4.printQueue\n");

		printf("enter your choice\n");
		int ch;
		scanf("%d",&ch);

		switch(ch){

			case 1:{
				enqueue();
				printQueue();

			       }
			       break;
			case 2:{
				       int ret=dequeue();
				       if(flag==0){
					       printf("queue underflow\n");
				       }else{
					       printf("%d is dequed\n",ret);
				       }
			         printQueue();
			       }
			       break;
			case 3:
			         {
				  int ret=frontt();

			               if(ret==-1){
					       printf("queue underflow\n");
				       }else{
					       printf("front=%d\n",ret);
				       }
				 }
				 break;
			case 4:
				 {
					 int ret=printQueue();
					if(flag==0){
					       printf("queue is empty\n");
					}
				 }
		                  break;
			default :
				   printf("wrong choice\n");
		}

		printf("do you want to continue\n");
		getchar();
		scanf("%c",&choice);
	}while(choice=='y'||choice=='Y');
}


