import java.util.*;
class DequeDemo{
	public static void main(String[]args){
		Deque obj = new ArrayDeque();
		obj.offer(10);
		obj.offer(40);
		obj.offer(20);
		obj.offer(50);
		obj.offer(30);
		
		System.out.println(obj);

		obj.offerFirst(4);
		obj.offerLast(60);
		System.out.println(obj);

		obj.pollFirst();
		obj.pollLast();
		System.out.println(obj);

		obj.peekFirst();
		obj.peekLast();
		System.out.println(obj);

		Iterator itr = obj.iterator();
		while(itr.hasNext()){
		System.out.println(itr.next());
		}
		
		Iterator itr2 = obj.descendingIterator();
		while(itr2.hasNext()){
		System.out.println(itr2.next());
		}
	}

}

