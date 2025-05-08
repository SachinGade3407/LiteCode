#include<stdio.h>
#include<stdlib.h>
typedef struct Instagram{

	char username[15];
	int post;
	float followers;
	struct Instagram *next;
}Insta;

Insta *head = NULL;

Insta* createNode(){

	Insta *newNode = (Insta*)malloc(sizeof(Insta));
	getchar();
	printf("Enter user name: \n");
	char ch;
	int i=0;
	while((ch = getchar()) != '\n'){
		newNode->username[i] = ch;
		i++;
	}
	printf("Enter number of posts: \n");
	scanf("%d", &newNode->post);
	
	printf("Enter number of followers: \n");
	scanf("%f", &newNode->followers);
	newNode->next = NULL;

	return newNode;
}

void addNode(){

	Insta *newNode = createNode();
	if(head == NULL){
		head = newNode;
	}
	else{

		Insta *temp = head;
		while(temp->next !=NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}

}

int countNode(){

	Insta *temp = head;
	int count = 0;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;

}
void addFirst(){

	Insta *newNode = createNode();

	if(head == NULL){
		head = newNode;
	}
	else{
		newNode->next = head;
		head = newNode;
		
	}
}

void addLast(){

	addNode();
}

void addAtPos(int pos){

	int count = countNode();
	if(pos<= 0 || pos >= count+2){
		printf("Invaild position entered.... \n");
		return;
	}
	else{

		if(pos == 1){

			addFirst();

		}else if(pos == count+1){

			addLast();
		}
		else{
			Insta *newNode = createNode();
			Insta *temp= head;
			while(pos-2){
				temp = temp->next;
				pos--;
			}
			newNode->next = temp->next;
			temp->next = newNode;
		}
	}
}


void deleteFirst(){

	int count = countNode();

	if(head == NULL){
		printf("Linked List is empty....\n ");
	}
	else if(count ==1){
		free(head);
		head = NULL;
	}
	else{
		Insta *temp = head;
		head = head->next;
		free(temp);
	}
}

void deleteLast(){

	int count = countNode();

	if(head == NULL){
		printf("Linked List is empty....\n");
	}
	else if(count == 1){
		free(head);
		head = NULL;
	}
	else{
		Insta *temp = head;
		while(temp->next->next != NULL){

			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}

}

void deleteAtPos(int pos){
	
	int count = countNode();
	if(pos <= 0 || pos > count){
		printf("Invaild position entered....\n");
	}
	else{
		if(pos == 1){
			deleteFirst();
		}else if(pos == count){
			deleteLast();
		}else{

			Insta *temp = head;
			Insta *temp2 = head;

			while(pos-2){
				temp = temp->next;
				pos--;

			}
			temp2 = temp->next;
			temp->next = temp2->next;
			free(temp2);
		}
		
	}

}

void printLL(){

	if(head == NULL){
		printf("LL is empty\n");
	}
	else{
		Insta *temp = head;
		while(temp->next!=NULL){

			printf("|%s-",temp->username);
			printf("%d-",temp->post);
			printf("%f|->",temp->followers);
			temp = temp->next;
		}
			printf("|%s-",temp->username);
			printf("%d-",temp->post);
			printf("%f|",temp->followers);
	}
	printf("\n");
}


void main(){

	char choice;
	do{
		printf("1. Add Node\n");
		printf("2. Add First\n");
		printf("3. Add At Position\n");
		printf("4. Delete First\n");
		printf("5. Delete Last\n");
		printf("6. Delete At Position\n");
		printf("7. Count Nodes\n");
		printf("8. Print Linked List\n");

		int ch;
		printf("Enter Choice : \n");
		scanf("%d", &ch);
		switch(ch){
			
			case 1:
				addNode();
				break;
			case 2:
				addFirst();
				break;
			case 3:{
					int pos;
					printf("Enter the position: \n");
					scanf("%d",&pos);
					addAtPos(pos);
				}
				break;
			case 4:
				deleteFirst();
				break;
			case 5:
				deleteLast();
				break;
			case 6:{
					int pos;
					printf("Enter the position: \n");
					scanf("%d",&pos);
					deleteAtPos(pos);
			       }
				break;
			case 7:
				if(head == NULL){
					printf("Linked List is empty..\n");
				}else{
					printf("%d\n",countNode());

				}
				break;
			case 8: 
				printLL();
				break;
			default:
				printf("Wrong choice...\n");
		}

		getchar();
		printf("Do you want to continue? \n");
		scanf("%c", &choice);
		
	}while(choice == 'Y' || choice =='y');
}
