/*  Doubly Linkedlist all function*/

# include <stdio.h>
# include <stdlib.h>
typedef struct Node {
	struct Node *prev ;
	int data ;
	struct Node *next ;
}node ;
node *head=NULL ;

node *createnode () {
	node *newnode=(node*)malloc(sizeof(node)) ;
	newnode->prev=NULL ;
	printf("Enter int data\n") ;
	scanf("%d",&newnode->data) ;
	getchar() ;
	newnode->next=NULL ;
	return newnode ;
}
int addnode () {
	node *newnode=createnode() ;
	if (head==NULL) {
		head=newnode ;
		return 0 ;
	}
	else {
		node *temp=head ;
		while (temp->next!=NULL) {
			temp=temp->next ;
		}
		temp->next=newnode ;
		newnode->prev=temp ;
		return 0 ;
	}
}
int countNode () {
	node *temp=head ;
	int count=0 ;
	while (temp!=NULL) {
		count++ ;
		temp=temp->next ;
	}
	return count ;
}
int nodeCount () {
	int count=countNode() ;
	printf("Total number of nodes->|%d|\n",count) ;
	return 0 ;
}
int addfirst () {
	node *newnode=createnode() ;
	if (head==NULL) {
		head=newnode ;
		return 0 ;
	}
	else {
		newnode->next=head ;
		head->prev=newnode ;
		head=newnode ;
	}
}
int addlast () {
	node *newnode=createnode() ;
	if (head==NULL) {
		head=newnode ;
		return 0 ;
	}
	else {
		node *temp=head ;
		while (temp->next!=NULL) {
			temp=temp->next ;
		}
		temp->next=newnode ;
		newnode->prev=temp ;
		return 0 ;
	}
}
int addAtpos (int pos) {
	int count=countNode() ;
	if (pos<=0 || pos>count+1) {
		printf("Invalid input by user\n") ;
		return -1 ;
	}
	else if (pos==1) {
		addfirst() ;
		return 0 ;
	}
	else if (pos=count+1) {
		addlast() ;
		return 0 ;
	}
	else {
		node *newnode=createnode() ;
		node *temp=head ;
		while (pos-2) {
			temp=temp->next ;
			pos-- ;
		}
		newnode->next=temp->next ;
		newnode->prev=temp ;
		temp->next->prev=newnode ;
		temp->next=newnode ;
		return 0 ;
	}
}
int deletefirst () {
	int count=countNode() ;
	if (head==NULL) {
		printf("Already linklist is null\n") ;
		return -1 ;
	}
	else if (count==1) {
		free(head) ;
		head=NULL ;
		return 0 ;
	}
	else {
		head=head->next ;
		free(head->prev) ;
		head->prev=NULL ;
		return 0 ;
	}
}
int deletelast () {
	int count=countNode() ;
	if (count==1) {
		free(head) ;
		head=NULL ;
		return 0 ;
	}
	else if (head==0) {
		printf("Already linklist is null\n") ;
		return -1 ;
	}
	else {
		node *temp=head ;
		while (temp->next->next!=NULL) {
			temp=temp->next ;
		}
		free(temp->next) ;
		temp->next=NULL ;
		return 0 ;
	}
}
int deleteAtpos (int pos) {
	int count=countNode() ;
	if (pos<=0 || pos>=count+1) {
		printf("Invalid input by user\n") ;
		return -1 ;
	}
	else if (pos==1) {
		deletefirst() ;
		return 0 ;
	}
	else if (pos==count) {
		deletelast() ;
		return 0 ;
	}
	else {
		node *temp=head ;
		while (pos-2) {
			temp=temp->next ;
			pos-- ;
		}
		node *temp1=temp->next ;
		temp->next=temp1->next ;
		free(temp1) ;
		temp->next->prev=temp ;
		return 0 ;
	}
}
void printLL() {
	if (head==NULL) {
		printf("Linked list is empty\n") ;
	}
	else {
		node *temp=head ;
		while (temp->next!=NULL) {
		        printf("|%d|->",temp->data) ;	
			temp=temp->next ;
		}
		printf("|%d|",temp->data) ;	
		printf("\n") ;
	}
}
void main () {
	char choice ;
        do {
                printf("1-addnode\n") ;
                printf("2-addfirst\n") ;
                printf("3-addAtpos\n") ;
                printf("4-addlast\n") ;
                printf("5-deletefirst\n") ;
                printf("6-deletelast\n") ;
                printf("7-deleteAtpos\n") ;
                printf("9-printLL\n") ;
                printf("10-nodeCount\n") ;

                int num ;
                printf("Enter choice\n") ;
                scanf("%d",&num) ;
                getchar() ;

                switch (num) {
                        case 1 :
                                addnode() ;
                                break ;
                        case 2 :
                                addfirst() ;
                                break ;
                        case 3 :
                                {
                                        int pos ;
                                        printf("Enter position of node\n") ;
                                        scanf("%d",&pos) ;
                                        getchar() ;
                                        addAtpos(pos) ;
                                }
                                break ;
                        case 4 :
                                addlast() ;
                                break ;
                        case 5 :
                                deletefirst() ;
                                break ;
                        case 6 :
                                deletelast() ;
                                break ;
                        case 7 :
                                {
                                int pos1 ;
                                printf("Please enter position want to delete\n") ;
                                scanf("%d",&pos1) ;
                                getchar() ;
                                deleteAtpos(pos1) ;
                                }
                                break ;
			case 8:
				printLL() ;
				break ;
			case 9 :
				nodeCount() ;
				break ;
			default :
				printf("Invalid input\n") ;
		}
	  	printf("Do you want to continue\n") ;
                scanf("%c",&choice) ;
		getchar() ;
        }
        while (choice=='y' || choice=='Y') ;
}

