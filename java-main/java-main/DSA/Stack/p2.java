import java.util.*;
class Stack{
	int maxSize;
	int stackArr[];
	int top = -1;

	Stack(int size){
		this.stackArr = new int[size];
		this.maxSize = size;
	}
	void push(int data){
		if(top == maxSize-1){
			System.out.println("Stack Overflow");
			return;
		}else{
			top++;
			stackArr[top] = data;
		}
	}
	boolean empty(){
		if(top == -1)
			return true;
		else
			return false;
	}
	int pop(){
		if(empty()){
			System.out.println("Stack is empty");
			return -1;
		}else{
			int val = stackArr[top];
			top--;
			return val;
		}
	}
	int peek(){
		if(empty()){
			System.out.println("Stack is empty");
			return -1;
		}else{
		       	return stackArr[top];
		}
	}
	int size(){
		return top;
	}

}
class Client{
	public static void main(String[]args){
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter the Stack size");
	int size = sc.nextInt();
	Stack s = new Stack(size);
	char ch;
	do{
		System.out.println("1.push");
		System.out.println("2.pop");
		System.out.println("3.peek");
		System.out.println("4.empty");
		System.out.println("5.size");
		System.out.println("6.printStack");
		System.out.println("Enter your choice");
		int choice = sc.nextInt();
		switch(choice){
			case 1:{
				       System.out.println("Enter element for stack");
				       int data = sc.nextInt();
				       s.push(data);
				}
			       break;
			case 2:
			       {
				       int flag = s.pop();
				       if(flag != -1){
					       System.out.println(flag + "Peek");
				       }
			}
			break;
			case 4:{
				       boolean val = s.empty();
				       if(val)
					       System.out.println("Empty");
				       else
					       System.out.println("Not empty");
			}
			break;
			case 5:{
				       int sz = s.size();
				       System.out.println("Satck Sixe" + (sz+1));
			}
			break;

			case 3:
			       {
				       int flag = s.pop();
				       if(flag != -1){
					       System.out.println(flag + "Poped");
				       }
			}
			break;

			default:
			       System.out.println("Wrong choice");
			       break;
			}
			System.out.println("Do you want to continue?");
			ch = sc.next().charAt(0);
		}while(ch == 'Y' || ch == 'y');
	}
}


