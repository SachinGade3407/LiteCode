import java.util.*;
class ArrayListDemo extends ArrayList{
	public static void main(String[]args){
		ArrayListDemo al=new ArrayListDemo();
		al.add(10);
		al.add(20.5f);
		al.add("Salman");
		al.add(10);
		al.add(20.5f);
		System.out.println(al);
		//add(int,Element)
		al.add(3,"Core2Web");
		System.out.println(al);

		//size()
		System.out.println(al.size());

		//contains(object)
		System.out.println(al.contains("Shashi"));
		System.out.println(al.contains(30));

		//indexOf(Object)
		System.out.println(al.indexOf(10));

		//LastIndexOf(Object)
		System.out.println(al.lastIndexOf(20.5f));

		//getIndex()
		System.out.println(al.get(3));

		//set(Index,Element)
		System.out.println(al.set(3,"Incubetor"));
		System.out.println(al);

		//addAll(collection)
		ArrayList al2=new ArrayList();
		al2.add("Salman");
		al2.add("Sharukh");
		al2.add("Amir");
		al.addAll(al2);
		System.out.println(al);
		al.addAll(3,al2);
		System.out.println(al);

		//removeRange(Int,Int)
		al.removeRange(3,5);
		System.out.println(al);

		//remove(int)
		System.out.println(al.remove(4));
		System.out.println(al);

		//toArray
		Object arr[]=al.toArray();
		for(Object data : arr){
			System.out.print(data +" ");
		}
		System.out.println();
		

		//clear
		al.clear();
		System.out.println(al);
	}
}

