//PUSH :POP:PEEK......USING STACK....



#include<stdio.h>
int size;
int top=-1;

int push(int stack[]){
	if(top==size-1){
		printf("Stack Overflow");
		return -1;
	}else{
		int data;
		printf("Enter data\n");
		scanf("%d",&data);
		top++;
		stack[top]=data;
		return 0;
	}
}
int  pop(int *stack){

	if(top==-1){
		printf("Stack Underflow\n");
		return -1;
	}else{
		int data=*(stack+top);
		top--;
		return data;
	}
}
int peek(int stack[]){
	if(top==-1){
		printf("Stack is Empty\n");
		return -1;
	}else{
		return stack[top];
	}
}
void main(){

	printf("Enter stack size:\n");
	scanf("%d",&size);

	int stack[size];
	char choice;
	do{
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.peek\n");

		int ch;
		printf("Enter your choice\n");
		scanf("%d",&ch);

		switch(ch){
			
			case 1:
				push(stack);
				break;

			case 2:
				{
				int ret=pop(stack);
				printf("%d popped\n",ret);
				}
				break;
			case 3:
				peek(stack);
				printf("popped\n");
				break;

			default:
				printf("Invalid choice\n");
				break;
		}
		getchar();
		printf("Do you want to continue?\n");
		scanf("%c",&choice);
	}
	while(choice=='y'||choice=='Y');
}


