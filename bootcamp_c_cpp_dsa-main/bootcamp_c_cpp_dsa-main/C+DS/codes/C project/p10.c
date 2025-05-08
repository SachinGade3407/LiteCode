//10) circular queue using linked list

# include <stdio.h>
# include <stdlib.h>
typedef struct demo {
	int data ;
	struct demo *next ;
}demo ;

demo *front=NULL ;
demo *rear=NULL ;
int size=0 ;

demo *createnode() {
	demo *newnode=(demo*)malloc(sizeof(demo)) ;
	if (newnode==NULL) {
		printf("Memory full\n") ;
		exit(0) ;
	}
	printf("Enter data\n") ;
	scanf("%d",&newnode->data) ;
	getchar() ;
	newnode->next=NULL ;
	return newnode ;
}	

int countNode() {
	int count=0 ;
	if (front==NULL) {
		return count ;
	}
	else {
		demo *temp=front ;
		while (temp->next!=front) {
			count++ ;
			temp=temp->next ;
		}
		return ++count ;
	}
}
int enQueue () {
	if (countNode()==size) {
		return -1 ;
	}
	else {
		demo *newnode=createnode() ;
		if (front==NULL) {
			front=newnode ;
			rear=newnode ;
			newnode->next=front ;
		}
		else {
			rear->next=newnode ;
			rear=newnode ;
			newnode->next=front ;
		}
		return 0 ;
	}
}

int flag=0 ;
int deQueue () {
	if (front==NULL) {
		flag=0 ;
		return -1 ;
	}
	else {
		int val=front->data ;
		flag=1 ;
		if (rear==front) {
			free(front) ;
			rear=NULL ;
			front=NULL ;
		}
		else {
			demo *temp=front ;
			front=front->next ;
			rear->next=front ;
			free(temp) ;
		}
		return val ;
	}
}
int frontt () {
	if (rear==NULL) {
		flag=0 ;
		return -1 ;
	}
	else {
		flag=1 ;
		return front->data ;
	}
}
int printQueue () {
	if (front==NULL) {
		return -1 ;
	}
	else {
		demo *temp=front ;
		while (temp->next!=front) {
			printf("|%d|->",temp->data) ;
			temp=temp->next ;
		}
		printf("|%d|",temp->data) ;
		printf("\n") ;
		return 0 ;
	}
}
void main () {
	printf("Enter size of queue\n") ;
	scanf("%d",&size) ;
	char choice ;
	do {
		printf("1.enQueue\n") ;
		printf("2.deQueue\n") ;
		printf("3.frontt\n") ;
		printf("4.printQueue\n") ;

		int ch ;
		printf("Enter choice\n") ;
		scanf("%d",&ch) ;
		getchar() ;

		switch(ch) {
			case 1 :
				{
					int ret=enQueue() ;
					if (ret==-1) {
						printf("Queue overflow\n") ;
					}
					
					break ;
				}
			case 2 :
				{
					int ret=deQueue() ;
					if (flag==0) {
						printf("Queue empty\n") ;
					}
					else {
						printf("%d is dequeued value\n",ret) ;
					}
				}
				break ;
			case 3 :
				{
					int ret=frontt() ;
					if (flag==0) {
						printf("Queue empty\n") ;
					}
					else {
						printf("%d is front value\n",ret) ;
					}
				}
				break ;
			case 4 :
				{
					int ret=printQueue() ;
					if (ret==-1) {
						printf("Queue empty\n") ;
					}
				}
				break ;
			default :
				printf("U entered wrong input\n") ;

		}
		printf("Do u want to continue\n") ;
		scanf("%c",&choice);
		}
	while(choice=='y' || choice=='Y') ;
}
