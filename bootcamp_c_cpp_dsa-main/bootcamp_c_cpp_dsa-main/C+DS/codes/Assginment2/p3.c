/*WAP that searches for occurrence of a particular element from 
 * doubly linear linked list*/
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
	newnode->prev=NULL ;
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
int Occ() {
	if (head==NULL) {
		printf("LinkedList is empty\n") ;
		return -1 ;
	}
	else {
		int num ;
		printf("Enter number want to check occurrence\n") ;
		scanf("%d",&num) ;
		getchar() ;
		demo *temp=head ;
		int numcount=0 ;
		while (temp!=NULL) {
			if (num==temp->data) {
				numcount++ ;
			}
			temp=temp->next ;
		}
		if (numcount==0) {
			printf("%d not found\n",num) ;
		}
		else if (numcount==1) {
			printf("%d occurrece only on time\n",num) ;
		}
		else {
			printf("%d occurrece %d times\n",num,numcount) ;
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
		printf("2.Occ()\n") ;

		int num ;
		printf("Enter your choice\n") ;
		scanf("%d",&num) ;
		getchar() ;
		switch (num) {
			case 1 :
				printLL() ;
				break ;
			case 2 :
				Occ() ;
				break ;
			default :
				printf("you enterend wrong input\n") ;
		}
		printf("Do u want to continue\nPlease enter y or Y\n") ;
		scanf("%c",&choice) ;
	}while (choice=='y' || choice=='Y') ;
}


