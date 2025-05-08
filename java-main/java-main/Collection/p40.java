import java.util.*;
class TreeMapDemo{
	public static void main(String[]args){
		
		SortedMap tm = new TreeMap();
		
		tm.put("IND","India");
		tm.put("PAK","Pakisthan");
		tm.put("BAN","Bangladesh");
		tm.put("AUS","Austrulia");

		System.out.println(tm);
		
		System.out.println(tm.subMap("AUS","PAK"));
		
		System.out.println(tm.tailMap("PAK"));
		
		System.out.println(tm.headMap("PAK"));
		
		System.out.println(tm.firstKey());
		
		System.out.println(tm.lastKey());
	
		System.out.println(tm.keySet());
		
		System.out.println(tm.values());
	}
}




