#include<stdio.h>
#include<stdlib.h>

typedef struct CryptoCurrency{

	char cName[20];
	int value;
	struct CryptoCurrency *next;

}node;

node *head = NULL;

node *createNode(){

	node *newNode = (node *)malloc(sizeof(node));

	printf("Enter name of Crypto : ");
	getchar();
	fgets(newNode->cName,20,stdin);
	printf("Enter Data : ");
	scanf("%d",&newNode->value);

	newNode->next = NULL;

	return newNode;
}

int countNode(){

        int count = 0;
        node *temp = head;

        while(temp != NULL){

                count++;
                temp = temp->next;
        }
        return count;
}

void addNode(){

	node *newNode = createNode();

	if(head == NULL){
		head = newNode;
	}else{
		node *temp = head;

		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void addFirst(){

	node *newNode = createNode();

	if(head == NULL){
		head = newNode;
	}else{
		newNode->next = head;
		head = newNode;
	}
}

void addLast(){

	addNode();
}

int addAtPos(){

	int count = countNode();
	int pos;
	printf("Enter position : ");
	scanf("%d",&pos);

	if(pos <= 0 || pos > count+1){

		printf("Invalid Node Position\n");
		return -1;
	}else{
		if(pos == 1){
			addFirst();
		}else if(pos == count+1){
			addLast();
		}else{
			node *newNode = createNode();
			node *temp = head;

			while(pos-2){
				temp = temp->next;
				pos--;
			}

			newNode->next = temp->next;
			temp->next = newNode;
			return 0;
		}
	}
}

void printll(){

	node *temp = head;
	char ch;

	while(temp->next != NULL){


		int i = 0;
		printf("|");
		while((ch=temp->cName[i])!='\n'){
			fputc(ch,stdout);
			i++;
		}
		printf("|");
		printf("|%d|",temp->value);
		printf("|%p|->",temp->next);
		temp = temp->next;
	}
	int i = 0;
        printf("|");
        while((ch=temp->cName[i])!='\n'){
		fputc(ch,stdout);
                i++;
	}
        printf("|");
	printf("|%d|", temp->value);
	printf("|NULL|");
}

void deleteFirst(){

	node *temp = head;

	if(head == NULL){

		printf("No node to delete\n");
	}else{
		head = head->next;
		free(temp);
	}
}

void deleteNode(){

	node *temp = head;

        if(head == NULL){

                printf("No node to delete\n");
        }else{  
                while(temp->next->next != NULL){

			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}

void deleteLast(){
        deleteNode();
}

int deleteAtPos(){

        int count = countNode();
        int pos;
        printf("Enter position : ");
        scanf("%d",&pos);

        if(pos <= 0 || pos > count){

                printf("Invalid Node Position\n");
                return -1;
        }else{
                if(pos == 1){
                        deleteFirst();
                }else if(pos == count){
                        deleteLast();
                }else{
                        node *temp1 = head;

                        while(pos-2){
                                temp1 = temp1->next;
                                pos--;
                        }

			node *temp2 = temp1->next;
			temp1->next = temp1->next->next;
			free(temp2);
			return 0;
                }
        }
}

void SLOccurrence(){

	int x;
	printf("Enter data to search : ");
	scanf("%d",&x);

	int a = 0;
	int b = 0;
	int i = 0;
	node *temp = head;
	while(temp != NULL){

		i++;
		if(temp->value == x){
			a = b;
			b = i;
		}
		temp = temp->next;
	}

	if(a == 0 && b == 0){
		printf("%d not found in linkedList\n",x);
	}else if(a == 0){
		printf("%d occurred only once in linkedList at position %d\n",x,b);
	}else{
		printf("Second last occurrence of %d in the linkedList is at position %d\n",x,a);
	}	
}


void main(){

	char ch;

	do{
		int x;
		printf("Select from below\n");
		printf(" 1) Add Node\n");
		printf(" 2) Add First Node\n");
		printf(" 3) Add Last Node\n");
		printf(" 4) Add Node At Position\n");
		printf(" 5) Delete Node\n");
		printf(" 6) Delete First Node\n");
		printf(" 7) Delete Last Node\n");
		printf(" 8) Delete Node At Position\n");
		printf(" 9) Print Linked List\n");
		printf("10) Count Nodes\n");
		printf("11) Second Last Occurence\n");
		printf("Your Choice : ");
		scanf("%d", &x);

		switch(x){
			case 1:
				addNode();
				break;
			case 2:
				addFirst();
                                break;
			case 3:
				addLast();
                                break;
			case 4:
				addAtPos();
                                break;
			case 5:
				deleteNode();
                                break;
			case 6:
				deleteFirst();
                                break;
			case 7:
				deleteLast();
                                break;
			case 8:
				deleteAtPos();
                                break;
			case 9:
				printll();
                                break;
			case 10:
				printf("Count = %d\n",countNode());
				break;
			case 11:
				SLOccurrence();
				break;
			default:
				printf("Input Invalid\n");
		}

		printf("Do you want to continue? : ");
		getchar();
		scanf("%c",&ch);
		}

	while(ch == 'y' || ch == 'Y');

}
