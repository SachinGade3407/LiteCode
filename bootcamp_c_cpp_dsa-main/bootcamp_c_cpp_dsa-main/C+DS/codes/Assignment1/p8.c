/*WAP that accepts a singly linear linked list from the user
 * Take a number from user and only keep the elements that are equal in 
 * length of that number and delete other elements and print linked list
 * INPUT-Shashi,Ashish,Kanha,Rahul,Badhe
 * INPUT-Enter number 6
 * OUTPUT-
 * Shashi
 * Ashish  */
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
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
int countNode () {
	int count=0 ;
	demo *temp=head ;
	while (temp!=NULL) {
		count++ ;
		temp=temp->next ;
	}
	printf("count:%d\n",count);
	return count ;
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
int LL() {
	if (head==NULL) {
		printf("LinkedList is empty\n") ;
		return -1 ;
	}
	else {
		int length ;
		printf("Enter length of string\n") ;
		scanf("%d",&length) ;
		getchar() ;
		int pos=0 ;
		demo *temp=head ;
		while (temp!=NULL) {
			pos++ ;
			int size=0 ;
			char *str1=temp->str ;
			while (*str1!='\0') {
				size++ ;
				str1++ ;
			}
			if (size!=length) {
				int pos1=pos ;
				int count=countNode() ;
				if (count==1) {
					free(head) ;
					head=NULL ;
					pos-- ;
				}
				else if (pos==1) {
					demo *temp1=head ;
					head=temp1->next ;
					free(temp1) ;
					pos-- ;
				}
				else if (pos==count) {
					demo *temp1=head ;
					while (temp1->next->next!=NULL) {
						temp1=temp1->next ;
					}
					free(temp1->next) ;
					temp1->next=NULL ;
					pos-- ;
				}
				else {
					temp=head ;
					while (pos1-2) {
						temp=temp->next ;
						pos1-- ;
					}
					demo *temp1=temp->next ;
					temp->next=temp->next->next;
					free(temp1) ;
					pos-- ;
				}
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
		printf("2.countNode()\n") ;
		printf("3.LL()\n") ;

		int num ;
		printf("Enter your choice\n") ;
		scanf("%d",&num) ;
		getchar() ;
		switch (num) {
			case 1 :
				printLL() ;
				break ;
			case 2 :
				countNode() ;
				break ;
			case 3 :
				LL() ;
				break ;
			default :
				printf("your enterend wrong input\n") ;
		}
		printf("Do you want to continue\nPlease enter y or Y\n") ;
		scanf("%c",&choice) ;
	}
	while (choice=='y' || choice=='Y') ;
}
