import java.util.*;
class NavigableSetDemo{
	public static void main(String[]args){
		NavigableSet ns = new TreeSet();
		ns.add(10);
		ns.add(36);
		ns.add(12);
		ns.add(45);
		ns.add(16);

		System.out.println(ns.lower(12));
		
		System.out.println(ns.floor(10));
		
		System.out.println(ns.ceiling(45));
		
		System.out.println(ns.higher(36));
		
		System.out.println(ns.pollFirst());
		
		System.out.println(ns.pollLast());
		
		Iterator itr = ns.iterator();
		while(itr.hasNext()){
			System.out.println(itr.next());
		}
		Iterator itr1 = ns.descendingIterator();
		while(itr1.hasNext()){
			System.out.println(itr1.next());
		}
		System.out.println(ns.subSet(10,true,16,false));
	}
}

