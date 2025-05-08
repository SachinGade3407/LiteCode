/*WAP that accepts a singly linear linked list from the user
 * Reverse the data elements from the linked list
 * INPUT-Shashi,Ashish,Kanha,Rahul,Badhe
 * OUTPUT-
 * ihsahS,hishsA,ahnaK,luhaR,ehdaB   */
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
		demo *temp=head ;
		while (temp->next!=NULL) {
			printf("|%s|->",temp->str) ;
			temp=temp->next ;
		}
		printf("|%s|",temp->str) ;
		printf("\n") ;
		return 0 ;
	}
}
int rev() {
	if (head==NULL) {
		printf("LinkedList is empty\n") ;
		return -1 ;
	}
	else {
		demo *temp=head ;
		while (temp!=NULL) {
			char *str1=temp->str ;
			char *str2=temp->str ;
			while (*str2!='\0') {
				str2++ ;
			}
			str2-- ;
			while (str2>str1) {
				char ch=*str1 ;
				*str1=*str2 ;
				*str2=ch ;
				str1++ ;
				str2-- ;
			}
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
		printf("2.rev()\n") ;

		int num ;
		printf("Enter your choice\n") ;
		scanf("%d",&num) ;
		getchar() ;
		switch (num) {
			case 1 :
				printLL() ;
				break ;
			case 2 :
				rev() ;
				break ;
			default :
				printf("your enterend wrong input\n") ;
		}
		printf("Do you want to continue\nPlease enter y or Y\n") ;
		scanf("%c",&choice) ;
	}
	while (choice=='y' || choice=='Y') ;
}
