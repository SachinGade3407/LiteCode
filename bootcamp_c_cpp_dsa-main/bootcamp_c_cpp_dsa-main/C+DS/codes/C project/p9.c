//9) circular queue using array

#include<stdio.h>
int front=-1;
int rear=-1;
int size=0;
int flag=0;

int enqueue(int arr[]){
	if((rear==size-1 && front==0)||(rear==front-1)){
		return -1;
	}else{
		if(front==-1){
			front++;
		}else{
			if(rear==size-1){
				front!=0;
			}
			rear++;
			printf("Enter data\n");
			scanf("%d",&arr[rear]);

			return 0;
		}
	}
}
int dequeue(int arr[]){
	if(front==-1){
		flag=0;
		return -1;
	}else{
		flag=1;
		int val=arr[front];
		if(rear==front){
			rear++;
			front++;
		}else{
			if(front==size-1){
				front=-1;
			}
			front++;
		}
		return val;
	}
}
int printQueue(int arr[]){
	if(front<=rear){
		for(int i=front;i<=rear;i++){
			printf("%d",arr[i]);
		}
	}else{
		if(front>rear){
			for(int i=front;i<=size-1;i++){
				printf("%d",arr[i]);
			}
			for(int i=0;i<=rear;i++){
				printf("%d",arr[i]);
			}
		}
		return 0;
	}
}
void main(){

	printf("Enter size of an array\n");
	scanf("%d",&size);

	int arr[size];
	char choice;

	do{
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.printQueue\n");

		int ch;
		printf("Enter choice\n");
		scanf("%d",&ch);

		switch(ch){

			case 1:
				{
					int ret=enqueue(arr);
					if(ret==-1){
						printf("Queue overflow\n");
					}
				}
				break;
			case 2:
				{
					int ret=dequeue(arr);
					if(flag=1){
						printf("%d is dequeue\n",ret);
					}else{
						printf("Queue underflow\n");
					}
				}
				break;
			case 3:
				{
					int ret=printQueue(arr);
					if(ret==-1){
						printf("Queue is empty\n");
					}
				}
				break;
			default:
				printf("Wrong choice\n");
		}
		getchar();
		printf("Continue ?\n");
		scanf("%d",&ch);
	}
	while(choice=='y'||choice=='Y');
}
