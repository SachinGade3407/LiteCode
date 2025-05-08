/*Singly Circular All 9 function */



#include <stdio.h>
#include <stdlib.h> 
typedef struct demo {
	int data ;
	struct demo *next ;
}demo ;
demo *head=NULL ;

demo *createnode() {
	demo *newnode=(demo*)malloc(sizeof(demo)) ;
	printf("Enter any integer data\n") ;
	scanf("%d",&newnode->data) ;
	getchar() ;
	newnode->next=NULL ;
	return newnode ;
}
void addnode() { 
	demo *newnode=createnode() ;
	if (head==NULL) {
		head=newnode ;
		head->next=newnode ;
	}
	else {
		demo *temp=head ;
		while (temp->next!=head) {
			temp=temp->next ;
		}
		temp->next=newnode ;
		newnode->next=head ;
	}
}
int countNode() {
	if (head==NULL) {
		return 0 ;
	}
	else {
		int count=0 ;
		demo *temp=head ;
		while(temp->next!=head) {
			count++ ;
			temp=temp->next ;
		}
		count++ ;
		return count ;
	}
}
int nodeCount() {
	int count=countNode() ;
	printf("Total number of node->|%d|\n",count) ;
	return 0 ;
}
int addfirst() {
	demo *newnode=createnode() ;
	if (head==NULL) {
		head=newnode ;
		newnode->next=head ;
		return 0 ;
	}
	else {
		demo *temp=head ;
		while (temp->next!=head) {
			temp=temp->next ;
		}
		newnode->next=head ;
		temp->next=newnode ;
		head=newnode ;
		return 0 ;
	}
}
int addlast() {
	demo *newnode=createnode() ;
	if (head==NULL) {
		head=newnode ;
		newnode->next=head ;
		return 0 ;
	}
	else {
		demo *temp=head ;
		while (temp->next!=head) {
			temp=temp->next ;
		}
		temp->next=newnode ;
		newnode->next=head ;
	}
	return 0 ;
}
int addAtpos(int pos) {
	int count=countNode() ;
	if (pos<=0 || pos>count+2) {
		printf("Invalid input\n") ;
		return -1 ;
	}
	else {
		if (pos==1) {
			addfirst() ;
			return 0 ;
		}
		else if (pos==count+1) {
			addlast() ;
			return 0 ;
		}
		else {
			demo *newnode=createnode() ;
			demo *temp=head ;
			while (pos-2) {
				temp=temp->next ;
				pos-- ;
			}
			newnode->next=temp->next ;
			temp->next=newnode ;
			return 0 ;
		}
	}
}
int deletefirst() {
	int count=countNode() ;
	if (head==NULL) {
		printf("Linkedlist is already empty\n") ;
		return -1 ;
	}
	else if (head->next==head) {
		free(head) ;
		head=NULL ;
		return 0 ;
	}
	else {
		demo *temp1=head ;
		demo *temp2=head ;
		while (temp2->next!=head) {
			temp2=temp2->next ;
		}
		temp2->next=temp1->next ;
		head=temp1->next ;
		free(temp1) ;
		return 0 ;
	}
}
int deletelast() {
	if (head==NULL) {
		printf("Linkedlist is already empty\n") ;
		return -1 ;
	}
	else if (head->next==head) {
		free(head) ;
		head=NULL ;
		return 0 ;
	}
	else {
		demo *temp=head ;
		while (temp->next->next!=head) {
			temp=temp->next ;
		}
		free(temp->next) ;
		temp->next=head ;
		return 0 ;
	}
}
int deleteAtpos(int pos) {
	int count=countNode() ;
	if (head==NULL) {
		printf("Linkedlist is already empty\n") ;
		return -1 ;
	}
	else {
		if (pos<=0 || pos>count) {
			printf("Invalid input\n") ;
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
			demo *temp=head ;
			while (pos-2) {
				temp=temp->next ;
				pos-- ;
			}
			demo *temp1=temp->next ;
			temp->next=temp1->next ;
			free(temp1) ;
			return 0 ;
		}
	}
}
int printLL() {
	if (head==NULL) {
		printf("Linkedlist is alredy empty\n") ;
		return -1 ;
	}
	else {
		demo *temp=head ;
		while (temp->next!=head) {
			printf("|%d|->",temp->data) ;
			temp=temp->next ;
		}
		printf("|%d|\n",temp->data) ;
		return 0 ;
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
		printf("8-printLL\n") ;
                printf("9-nodeCount\n") ;

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
					getchar() ;
					for (int i=1 ; i<=num1 ; i++) {
                               	 		addnode() ;
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
	  	printf("Do you want to continue\nPlease enter y or Y\n") ;
                scanf("%c",&choice) ;
		getchar() ;
        }
        while (choice=='y' || choice=='Y') ;
}






