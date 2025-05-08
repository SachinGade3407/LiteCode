import java.util.*;
class SortDemo{
        public static void main(String[]args){
                ArrayList al=new ArrayList();
                al.add("one");
                al.add("two");
                al.add("three");
                al.add("five");
                al.add("six");
                System.out.println(al);
		TreeSet ts=new TreeSet(al);
                System.out.println(ts);
		
        }
}

