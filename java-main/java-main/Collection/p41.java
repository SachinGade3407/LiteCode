//Iterator

import java.util.*;
class IteratorMap{
	public static void main(String[]args){
		
		SortedMap tm = new TreeMap();
		
	       	tm.put("IND","India");
                tm.put("PAK","Pakisthan");
                tm.put("BAN","Bangladesh");
                tm.put("AUS","Austrulia");

                System.out.println(tm);

		Set<Map.Entry>data=tm.entrySet();
		Iterator<Map.Entry>itr=data.iterator();
		while(itr.hasNext()){
			//System.out.println(itr.hasNext());
			Map.Entry abc=itr.next();
			System.out.println(abc.getKey()+ ":" + abc.getValue());
		}
	}
}



