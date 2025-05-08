/* Doubly circular linkedlist*/

#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
}node;

node *head=NULL;
node *createNode(){

	node *newNode=(node*)malloc(sizeof(node));

	newNode->prev=NULL;

	printf("Enter Data:\n");
	scanf("%d",&newNode->data);
	getchar();

	newNode->next=NULL;
	return newNode;
	
}
int addNode(){
	node *newNode=createNode();
	if(head==NULL){
		head=newNode;
		head->next=head;
		head->prev=head;
		return 0;
	}else{
		head->prev->next=newNode;
		newNode->prev=head->prev;
		newNode->next=head;
		head->prev=newNode;
		return 0;
	}

}
int addfirst(){

	node *newNode=createNode();

	if(head==NULL){
		head=newNode;
		head->prev=head;
		head->next=head;
		return 0;
	}
	else{
		newNode->next=head;
		head->prev->next=newNode;
		newNode->prev=head->prev;
		head=newNode;
		return 0;
	}
}
int countNode(){
        node *temp=head;
        int count=0;
        while(temp->next!=NULL){
                count++;
                temp=temp->next;
        }
        count++;
        return count;
}
int nodecount(){
        int count=countNode();
        printf("Total number of nodes->|%d|\n",count);
        return 0;
}
int addlast(){
		addNode();
}

int addAtpos(int pos){
	int count=countNode();
	if(pos<=0 || pos>count+1){
		printf("Invalid Input\n");
		return -1;
	}else{
		if(pos==count+1){
			addlast();
		}else if(pos==1){
			addfirst();
		}else{
			node *newNode=createNode();
			node *temp=head;
			while(pos-2){
				temp=temp->next;
				pos--;
			}
			newNode->next=temp->next;
			newNode->prev=temp;
			temp->next->prev=newNode;
			temp->next=newNode;
		}
		return 0;
	}
}
/*
int countNode(){
	node *temp=head;
	int count=0;
	while(temp->next!=NULL){
		count++;
		temp=temp->next;
	}
	count++;
	return count;
}
int nodecount(){
	int count=countNode();
	printf("Total number of nodes->|%d|\n",count);
	return 0;
}
*/
int delfirst(){
	int count=countNode();
	if(head==NULL){
		printf("Invalid Input\n");
		return -1;
	}else{
		if(count==1){
			free(head);
			head=NULL;
			return 0;
		}else{
			head->prev->next=head->next;
			head=head->next;
			free(head->prev);
			head->prev=head->next;
		}
	}
	return 0;
}
int delLast(){
	int count=countNode();
	if(head==NULL){
		printf("Invalid Input\n");
		return -1;
	}else{
		if(head->next!=head){
			free(head);
			head=NULL;
		}else{
			head->prev=head->prev->prev;
			free(head->prev->next);
			head->prev->next=head;
		}
	}
	return 0;
}
int delAtpos(int pos){
	int count=countNode();
	if(pos<=0 || pos>=count+1){
		printf("Invlid Input\n");
		return -1;
	}else{
		if(pos==1){
			delfirst();
		}else if(pos==count){
			delLast();
		}else{
			node *temp=head;
			while(pos-2){
				temp=temp->next;
				pos--;
			}
			temp->next=temp->next->next;
			free(temp->next->prev);
			temp->next->prev=temp;
		}
	}
	return 0;
}
void printLL(){
	if(head==NULL){
		printf("Linked List is empty\n");
	}else{
		node *temp=head;
		while(temp->next!=head){
			printf("|%d|->",temp->data);
			temp=temp->next;
		}
		printf("|%d|",temp->data);
		printf("\n");
	}
}

void main () {
	char choice ;
        do {
                printf("1-addnode\n") ;
                printf("2-addfirst\n") ;
                printf("3-addAtpos\n") ;
                printf("4-addlast\n") ;
                printf("5-delfirst\n") ;
                printf("6-delLast\n") ;
                printf("7-delAtpos\n") ;
		printf("8-printLL\n") ;
		printf("9-nodecount\n");
               

                int num ;
                printf("Enter Data\n") ;
                scanf("%d",&num) ;
                getchar() ;

                switch (num) {
                        case 1 :
				{
					int num1 ;
					printf("Enter number of nodes\n") ;
					scanf("%d",&num1) ;
					
					for (int i=1 ; i<=num1 ; i++) {
                               	 		addNode() ;
					}
				}
                                break ;
                        case 2 :
                                addfirst() ;
                                break ;
                        case 3 :
                                {
                                        int pos ;
                                        printf("Enter position of node\n") ;
                                        scanf("%d",&pos) ;
                                        
                                        addAtpos(pos) ;
                                }
                                break ;
                        case 4 :
                                addlast() ;
                                break ;
                        case 5 :
                                delfirst() ;
                                break ;
                        case 6 :
                                delLast() ;
                                break ;
                        case 7 :
                                {
                                int pos1 ;
                                printf("Please enter position want to delete\n");
				scanf("%d",&pos1) ;
                                
                                delAtpos(pos1) ;
                                }
                                break ;
                        case 8:
				printLL() ;
				break ;
			case 9:
				countNode();
				break;

			default :
				printf("Invalid input\n") ;
		}
	  	printf("Do you want to continue\n") ;
                scanf("%c",&choice) ;
		getchar() ;
        }
        while (choice=='y' || choice=='Y') ;
}






            



