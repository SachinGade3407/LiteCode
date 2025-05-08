//Identity HashMap...

import java.util.*;
class IdentityHashMapDemo{
	public static void main(String[]args){
		IdentityHashMap hm = new IdentityHashMap();
		hm.put(new Integer(10),("Kanah"));
		hm.put(new Integer(19),("Ashish"));
		hm.put(new Integer(12),("Badhe"));
		hm.put(new Integer(18),("Rahul"));
		System.out.println(hm);
	}

}

