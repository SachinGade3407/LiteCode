import java.util.*;
class ArrayListDemo{
	public static void main(String[]args){
		al.add(10);
		al.add(20);
		al.add(30);
		al.add(new Interger(40));
		al.add(30);
		for(Object obj:al){
			System.out.println(obj);
		}
		for(int i=0;i<al.size();i++){
			System.out.println(al.get(i));
		}
	}
}
			

