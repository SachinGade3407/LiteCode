/*WAP that adds the digit of a data element from 
 * doubly linear linked list and changes the data*/
# include <stdio.h>
# include <stdlib.h>
typedef struct demo {
	struct demo *prev ;
	int data ;
	struct demo *next ;
}demo ;
demo *head=NULL ;

demo *createnode() {
	demo *newnode=(demo*)malloc(sizeof(demo)) ;
	printf("Enter integer data\n") ;
	scanf("%d",&newnode->data) ;
	getchar () ;
	newnode->next=NULL ;
	return newnode ;
}
int addnode() {
	demo *newnode=createnode() ;
	if (head==NULL) {
		head=newnode ;
		return 0 ;
	}
	else {
		demo *temp=head ;
		while (temp->next!=NULL) {
			temp=temp->next ;
		}
		temp->next=newnode ;
		newnode->prev=temp ;
		return 0 ;
	}
}
int printLL() {
	if (head==NULL) {
		printf("LinkedList is empty\n") ;
		return -1 ;
	}
	else {
		demo *temp=head ;
		while (temp->next!=NULL) {
			printf("|%d|->",temp->data) ;
			temp=temp->next ;
		}
		printf("|%d|",temp->data) ;
		printf("\n") ;
		return 0 ;
	}
}
int addDigit() {
	if (head==NULL) {
		printf("LinkedListi is empty\n") ;
		return -1 ;
	}
	else {
		demo *temp=head ;
		while (temp!=NULL) {
			int num=temp->data ;
			int rem=0 ;
			int sum=0 ;
			while (num!=0) {
				rem=num%10 ;
				sum+=rem ;
				num/=10 ;
			}
			temp->data=sum ;
			temp=temp->next ;
		}
		return 0 ;
	}
}
void main () {
	int n ;
	printf("Enter number of nodes\n") ;
	scanf("%d",&n) ;
	getchar() ;
	for (int i=1 ; i<=n ; i++) {
		addnode() ;
	}
	char choice ;
	do {
		printf("1.printLL()\n") ;
		printf("2.addDigit()\n") ;

		int num ;
		printf("Enter your choice\n") ;
		scanf("%d",&num) ;
		getchar() ;
		switch (num) {
			case 1 :
				printLL() ;
				break ;
			case 2 :
				addDigit() ;
				break ;
			default :
				printf("you enterend wrong input\n") ;
		}
		printf("Do you want to continue\nPlease enter y or Y\n") ;
		scanf("%c",&choice) ;
	}while (choice=='y' || choice=='Y') ;
}


