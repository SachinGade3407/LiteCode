
/*WAP that searches for first occurrence of a particular element from 
 * singly linear linked list*/
# include <stdio.h>
# include <stdlib.h>
typedef struct demo {
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
/*
int FirstOcc() {
	if (head==NULL) {
		printf("LinkedList is empty\n") ;
		return -1 ;
	}
	else {
		int num ;
		printf("Enter number want to check first occurrence\n") ;
		scanf("%d",&num) ;
		getchar() ;
		demo *temp=head ;
		int count=1 ;
		int FOcc=0 ;
		while (count) {
			FOcc++ ;
			if (num==temp->data) {
				count-- ;
			}
			temp=temp->next ;
		}
		if (FOcc==0) {
			printf("%d not found\n",num) ;
		}
		else {
			printf("First Occurrence of %d is %d\n",num,FOcc) ;
		}
		return 0 ;
	}
}*/
int FirstOcc(){
	 if (head==NULL) {
                printf("LinkedList is empty\n") ;
                return -1 ;
        }
        else {
                int num ;
                printf("Enter number want to check first occurrence\n") ;
                scanf("%d",&num) ;
                getchar() ;
                demo *temp=head ;
                int count=0 ;
                int x=0 ;
                while (temp!=NULL) {
                        count++ ;
                        if (num==temp->data) {
                              x=count;
			      break;
			      printf("First occurance%d",x);
			}else{
				printf("Number not found\n");
			}
			temp=temp->next;
		}
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
		printf("2.FirstOcc()\n") ;

		int num ;
		printf("Enter choice\n") ;
		scanf("%d",&num) ;
		getchar() ;
		switch (num) {
			case 1 :
				printLL() ;
				break ;
			case 2 :
				FirstOcc() ;
				break ;
			default :
				printf("You enterend wrong input\n") ;
		}
		printf("Do you want to continue\n") ;
		scanf("%c",&choice) ;
	}while (choice=='y' || choice=='Y') ;
}

