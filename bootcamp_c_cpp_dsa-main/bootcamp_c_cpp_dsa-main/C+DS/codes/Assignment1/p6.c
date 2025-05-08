/*WAP that accepts a singly linear linked list from the user
 * Take a number from user and print the data of length of that 
 * number
 * INPUT-Shashi,Ashish,Kanha,Rahul,Badhe
 * INPUT-Enter number 5
 * OUTPUT-
 * Kanha
 * Rahul
 * Badhe   */


# include <stdio.h>
# include <stdlib.h>
typedef struct demo {
	char str[20] ;
	struct demo *next ;
}demo ;
demo *head=NULL ;

demo *createnode() {
	demo *newnode=(demo*)malloc(sizeof(demo)) ;
	printf("Enter any string\n") ;
	char ch ;
	int i=0 ;
	while ((ch=getchar())!='\n') {
		newnode->str[i]=ch ;
		i++ ;
	}
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
		int length ;
		printf("Enter length of string\n") ;
		scanf("%d",&length) ;
		getchar() ;
		demo *temp=head ;
		while (temp!=NULL) {
			int size=0 ;
			char *str1=temp->str ;
			while (*str1!='\0') {
				size++ ;
				str1++ ;
			}
			if (size==length) {
				printf("|%s|\n",temp->str) ;
			}
			temp=temp->next ;
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

		int num ;
		printf("Enter your choice\n") ;
		scanf("%d",&num) ;
		getchar() ;
		switch (num) {
			case 1 :
				printLL() ;
				break ;
			default :
				printf("You enterend wrong input\n") ;
		}
		printf("Do you want to continue\nPlease enter y or Y\n") ;
		scanf("%c",&choice) ;
	}
	while (choice=='y' || choice=='Y') ;
}
