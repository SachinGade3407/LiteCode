//7) linear queue using array.

#include<stdio.h>
int size =0;
int front=-1;
int rear=-1;
int flag=0;
int enqueue(int arr[]){

	if(rear==size-1){
		return -1;
	}else{
		if(front==-1 && rear==-1){
			front++;
		}
		rear++;
		printf("Enter data\n");
		scanf("%d",&arr[rear]);
		return 0;
	}
}
int dequeue(int arr[]){

	if(rear==-1 ||front>rear){
		flag=0;
		return -1;
	}else{
		flag= 1;
		int val=arr[front];
		if(front==rear){
			front=-1;
			rear=-1;

		}
		front++;
		return val;
	}

}
int frontt(int arr[]){

	if(front==-1){
		flag=0;
		return -1;
	}else{
		flag=-1;
		return arr[front];
	}
}
int printQueue(int arr[]){

	if(front==-1){
		return-1;
	}else{
		for(int i=front;i<=rear;i++){
			printf("%d",arr[i]);
		}
		printf("\n");
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
		printf("3.Front\n");
		printf("4.printQueue\n");

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
					int ret=frontt(arr);
					if(flag==1){
						printf("Front=%d\n",ret);
					}else{
						printf("Queue is empty\n");
					}
				}
				break;
			case 4:
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


