//Doubly LL.
import java.util.*;
class  Node{
	Node prev = null;
	int data;
	Node next = null;
	Node(int data){
		this.data = data;

	}

}
class DoublyLinkedList{
	Node head = null;
	void addFirst(int data){
		Node newNode = new Node(data);
		if(head == null){
			head= newNode;
		}else{
			newNode.next = head;
			head.prev = newNode;
			head = newNode;
		}

	}
	int CountNode(){
		return 10;
	}

	void addLast(int data){
	
	}
	
	void addAtPos(int pos,int data){
		
	}
	void delFirst(){
	
	}
	void delLast(){
	}
	void delAtPos(int pos){

	}
	void printDLL(){
		if(head == null){
			System.out.println("LinkedList is Empty");
		}else{
			Node temp = head;
			while(temp.next != null){
				System.out.print(temp.data + "->");
				temp = temp.next;
			}
			System.out.println(temp.data);
		}
	}
}

class Client{
	public static void main(String[]arg){
		DoublyLinkedList ll = new DoublyLinkedList();
		char ch;
		do{
			System.out.println("Doubly LinkedList");
			System.out.println("1.addFirst");
			System.out.println("2.addLast");
			System.out.println("3.addAtPos");
			System.out.println("4.delFirst");
			System.out.println("5.delLast");
			System.out.println("6.delAtPos");
			System.out.println("7.countNode");
			System.out.println("8.printDLL");

			System.out.println("Enter your choice");
			Scanner sc = new Scanner(System.in);
			int choice = sc.nextInt();
			switch(choice){
				case 1:{
					       System.out.println("Enter data");
					       int data = sc.nextInt();
				       	       ll.addFirst(data);
				}
				break;
				case 2:{
					       System.out.println("Enter data");
					       int data = sc.nextInt();
					       ll.addLast(data);
				}
				break;
				case 3:{
					       System.out.println("Enter data");
					       int data = sc.nextInt();
					       System.out.println("Enter Pos");
					       int pos = sc.nextInt();
					       ll.addAtPos(pos,data);
				}
				break;
				case 4:
					ll.delFirst();
					break;
				case 5:
					ll.delLast();
					break;
				case 6:{
					       System.out.println("Enter Pos");
					       int pos = sc.nextInt();
					       ll.delAtPos(pos);
				}
				break;
				case 7:{
					       int count = ll.countNode();
					       System.out.println(count);
				}
				break;
				case 8:
					ll.printDLL();
					break;
				default:
					System.out.println("Wrong I/P");
					break;
			}
			System.out.println("Continue?");
			ch = sc.next().charAt(0);
		}while(ch == 'Y' || ch == 'y');
	}
}


