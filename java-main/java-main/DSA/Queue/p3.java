import java.util.*;
class CirculerQueue{
	int queueArr[];
	int front;
	int rear;
	int maxSize;
	CirculerQueue(int size){
		this.queue = new int[size];
		this.front = -1;
		this.rear = -1; 
		this.maxSize = size;
	}
	void enqueue(int data){
		if((front == 0 && rear == maxSize-1) && (rear+1)%maxSize == front){
			System.out.println("Queue is full");
			return;
		}else if(front == -1){
			front = rear = 0;

		}
	
	}
	int dequeue(){
		return -1;
	
	}
	void printQueue(){
	
	}
}
class Client{
	public static void main(String[]args){
		System.out.println("Enter size of an array");
		Scanner sc = new Scanner(System.in);
		int size = sc.nextInt();
		CircularQueue cq = new CircularQueue(size);
		char ch;
		do{
			System.out.println("1.enqueue");
			System.out.println("2.dequeue");
			System.out.println("3.printQueue");
			System.out.println("Enter more choice");
			int choice = sc.nextInt();
			switch(choice){
				case 1:{
					       System.out.println("Enter data for queue");
					       int data = sc.nextInt();
					       cq.enqueue(data);
				}
				break;
				case 2:{
					       int ret = cq.dequeue();
					       if(ret != -1)
						       System.out.println(ret +" Popped");
				}
				break;
				case 3:{
					       cq.printQueue();

				}
				break;
				default:
				System.out.println("Wrong choice");
			}
			System.out.println("Do u want to continue?");
			ch = sc.next().chatAt(0);

		}while(ch == 'y' || ch == 'Y');
	
	}
	
}
